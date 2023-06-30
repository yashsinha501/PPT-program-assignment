#include<bits/stdc++.h>
using namespace std;

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int i=0,j=m-1;
        while(i<n and j>0){
            if(matrix[i][j]==target)return true;
            else if(matrix[i][j]<target)i++;
            else j--;
        }
        return false;
    }

int main()
{
    int m,n;
    cin>>m>>n;
    vector<vector<int>> a;
    for (int i=0;i<m;i++){
        vector<int> tmp;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            tmp.push_back(x);
        }
        a.push_back(tmp);
    }
    int tar;
    cin>>tar;
    bool ans=searchMatrix(a,tar);
    if(ans)cout<<"True";
    else cout<<"False";
    cout<<endl;
    return 0;
}