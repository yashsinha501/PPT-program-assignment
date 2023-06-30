#include<bits/stdc++.h>
using namespace std;

    vector<vector<int>> construct2DArray(vector<int>& original,int m,int n) {
        if(m*n!=original.size())
            return {};
        vector<vector<int>>ans(m, vector<int>(n));
        int x=0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                ans[i][j]= original[x++];
            }
        }
        return ans;      
    }

int main()
{
    int m,n;
    cin>>m>>n;
    vector<int> a;
    for (int i=0;i<n*m;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }

    vector<vector<int>> ans=construct2DArray(a,m,n);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++)cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
