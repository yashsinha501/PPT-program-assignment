#include<bits/stdc++.h>
using namespace std;

int maxCandies(vector<int>& a) {
    map<int,int> mp;
    for(int i=0;i<a.size();i++)mp[a[i]]++;
    return min(a.size()/2,mp.size());
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
    int ans=maxCandies(a);
    cout<<ans<<endl;
    return 0;
}