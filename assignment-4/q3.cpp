#include<bits/stdc++.h>
using namespace std;

    vector<vector<int>> transpose(vector<vector<int>> a) {
        int M = a.size(), N = a[0].size();
        vector<vector<int>> B(N, vector<int>(M, 0));
        for (int j = 0; j < N; j++)
            for (int i = 0; i < M; i++)
                B[j][i] = a[i][j];
        return B;
    }

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> a;
    for (int i=0;i<n;i++){
        vector<int> tmp;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            tmp.push_back(x);
        }
        a.push_back(tmp);
    }

    vector<vector<int>> ans=transpose(a);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}   

 