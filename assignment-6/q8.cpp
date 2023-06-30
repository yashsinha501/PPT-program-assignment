#include<bits/stdc++.h>
using namespace std;

    vector<vector<int>> multiply(vector<vector<int>>& A, vector<vector<int>>& B) {
        int M = A.size(), K = A[0].size(), N = B[0].size();
        vector<vector<int>> ans(M, vector<int>(N));
        for (int i = 0; i < M; ++i) {
            for (int j = 0; j < N; ++j) {
                for (int k = 0; k < K; ++k) {
                    ans[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        return ans;
    }

int main()
{
    int m,k,n;
    cin>>m>>k>>n;
    vector<vector<int>> a,b;
    for (int i=0;i<m;i++){
        vector<int> tmp;
        for(int j=0;j<k;j++){
            int x;
            cin>>x;
            tmp.push_back(x);
        }
        a.push_back(tmp);
    }
    for (int i=0;i<k;i++){
        vector<int> tmp;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            tmp.push_back(x);
        }
        a.push_back(tmp);
    }
    vector<vector<int>> ans=multiply(a,b);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}