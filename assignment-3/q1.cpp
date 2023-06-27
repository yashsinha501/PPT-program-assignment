#include<bits/stdc++.h>
using namespace std;

int threeSum(vector<int>& a, int tar) {
    int n=a.size();
    if(n<3)return 0;
    sort(a.begin(),a.end());
    int ans=a[0]+a[1]+a[2];
    for(int i=0;i<n-2;i++){
        if(i>0 and a[i]==a[i-1])continue;

        int j=i+1;
        int k=a.size()-1;

        while(j<k){
            int cur=a[i]+a[j]+a[k];
            if(cur==tar)return tar;
            if(abs(ans-tar)>abs(cur-tar)){
                ans=cur;
            }
            if(cur>tar){
                k--;
            }
            else{
                j++;
            }
        }
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<int> a;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    int tar;
    cin>>tar;
    int ans=threeSum(a,tar);
    cout<<ans<<endl;
    return 0;
}
