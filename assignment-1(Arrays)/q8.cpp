#include<bits/stdc++.h>
using namespace std;

vector<int> missRepeat(vector<int> arr) {
    int n=arr.size();
    map<int, int> mp;
    int miss, rpt;
    vector<int> ans;

    for (int i = 1; i <=n ; ++i) {
        mp[i]++;
        mp[arr[i-1]]++;
    }

    for(auto x:mp){
        if (x.second == 1)
            miss = x.first;
        if (x.second == 3)
            rpt = x.first;
    }
    ans.push_back(rpt);
    ans.push_back(miss);
    return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<int> a;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    vector<int> ar;
    ar=missRepeat(a);

    for(int i=0;i<ar.size();i++)cout<<ar[i]<<" ";

    cout<<endl;

    return 0;
}