#include<bits/stdc++.h>
using namespace std;

    bool checkStraightLine(vector<vector<int>>& a) {
        int n = a.size();
        
        int xdiff = a[1][0] - a[0][0]; 
        int ydiff = a[1][1] - a[0][1]; 
        
        for(int i = 2; i < n; i++) {
            int x1 = a[i][0] - a[0][0];
            int y1 = a[i][1] - a[0][1];
            
            if(x1 * ydiff != y1 * xdiff) return false; 
        }
        
        return true;
    }


int main(){

    int n;
    cin>>n;
    vector<vector<int>> a;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        a.push_back({x,y});
    }
    int ans=checkStraightLine(a);
    if(ans)cout<<"True"<<" ";
    else cout<<"False"<<" ";
    cout<<endl;

    return 0;
}