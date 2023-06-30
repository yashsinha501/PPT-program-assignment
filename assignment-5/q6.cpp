#include<bits/stdc++.h>
using namespace std;

    vector<int> findDuplicates(vector<int>& a) {
        int n=a.size();
        if(n==1)return {};
        vector<int> ans;
        for(int i=0;i<n;i++){
            int idx=abs(a[i])-1;
            
            if(a[idx]<0){
                ans.push_back(idx+1);
            }
            
            a[idx]=a[idx]*-1;
            
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

    vector<int> ans=findDuplicates(a);
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}