#include<bits/stdc++.h>
using namespace std;

int xorNum(vector<int>& a) {

    int ans=0;
    for(int i=0;i<a.size();i++){
        ans=ans^a[i];
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
    int ans=xorNum(a);
    cout<<ans<<endl;
    return 0;
}