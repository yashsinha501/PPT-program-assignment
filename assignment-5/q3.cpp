#include<bits/stdc++.h>
using namespace std;

    vector<int> sortedSquares(vector<int>& a) {
        for(int i=0;i<a.size();i++)
        {
            a[i]=a[i]*a[i];
        }
        sort(a.begin(),a.end());
        
        return a;
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
    vector<int> ans= sortedSquares(a);
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}