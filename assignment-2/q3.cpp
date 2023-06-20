#include<bits/stdc++.h>
using namespace std;

int subseq(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> map;
        for(auto a : nums) {
            map[a]++;
        }
        
        for(auto b : map) {
            auto found = map.find(b.first+1);
            if(found != map.end()) {
                ans = max(ans, b.second+found->second); 
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
    int ans=subseq(a);
    cout<<ans<<endl;
    return 0;
}