#include<bits/stdc++.h>
using namespace std;

vector<int> tarSum(vector<int>& a, int tar) {
        int n=a.size();
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(mp.find(tar-a[i])!=mp.end())
                return {mp[tar-a[i]],i};
            mp[a[i]]=i;
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
    vector<int> ans;
    ans=tarSum(a,tar);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}