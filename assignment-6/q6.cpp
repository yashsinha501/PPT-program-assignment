#include<bits/stdc++.h>
using namespace std;

    vector<int> findOriginalArray(vector<int>& a) {
        int n = a.size();
        if (n % 2 == 1) return {};
        sort(a.begin(), a.end());
        vector<int> ans;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[a[i]]++;
        }
        for (int i = 0; i < n; i++) {
          if (mp[a[i]] == 0) continue;
          if (mp[a[i] * 2] == 0) return {};
          ans.push_back(a[i]);
          mp[a[i]]--;
          mp[a[i] * 2]--;
        }
        return ans;
    }

int main()
{
    int n;
    cin>>n;
    vector<int> a;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            a.push_back(x);
        }

    vector<int> ans=findOriginalArray(a);
    for(int i=0;i<(n/2);i++)cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}