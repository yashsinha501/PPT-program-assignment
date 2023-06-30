#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> findDifference(vector<int>& a, vector<int>& b) {
    vector<vector<int>>ans={{},{}};
    set<int>s1(a.begin(),a.end());
    set<int>s2(b.begin(),b.end());
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

    vector<vector<int>> ans=findDifference(a,b);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++)cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}