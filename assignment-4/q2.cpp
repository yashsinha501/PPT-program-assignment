#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> help(vector<int>& nums1, vector<int>& nums2) {
  vector<vector<int>>ans={{},{}};
    set<int>s1(nums1.begin(),nums1.end());
    set<int>s2(nums2.begin(),nums2.end());
    for(int i:s1){
        if(s2.count(i)==0){
            ans[0].push_back(i);}}
    for(int j:s2){
        if(s1.count(j)==0){
            ans[1].push_back(j);}}
    return ans;
    }

int main()
{
    int n;
    cin>>n;
    vector<int> a,b;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        b.push_back(x);
    }
    vector<vector<int>> ans=help(a,b);
    for(int i=0;i<ans.size();i++)cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
    cout<<endl;
    return 0;
}