#include<bits/stdc++.h>
using namespace std;

    int partition(vector<int>& a) {
        sort(a.begin(),a.end());
        int n=a.size();
        int sum=0;
        for(int i=0;i<n-1;i+=2){
            sum+=min(a[i],a[i+1]);
        }
        return sum;
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

    int ans=partition(a);
    cout<<ans<<endl;
    return 0;
}   

 