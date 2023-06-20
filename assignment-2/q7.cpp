#include<bits/stdc++.h>
using namespace std;

    bool isMonotonic(vector<int>& a) {
        bool l = true;
        bool h = true;
        for(int i = 0; i < a.size() - 1; i++) {
            if(a[i] > a[i+1]) l = false;
            if(a[i] < a[i+1]) h = false;
            if(l == false && h == false) return false;
        }
        return true;
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
    int ans=isMonotonic(a);
    if(ans) cout<<"True"<<endl;
    else cout<<"False"<<endl;
    
    return 0;
}