#include<bits/stdc++.h>
using namespace std;


int minScore(vector<int>& a, int k) {
        
    int mini=INT_MAX,maxi=INT_MIN;
    for(int i=0;i<a.size();i++)
    {
        mini=min(mini,a[i]);
        maxi=max(maxi,a[i]);
    }
    mini+=k;
    maxi-=k;
    return max(0,maxi-mini); 
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
    int k;
    cin>>k;
    cout<<minScore(a,k)<<endl;
    return 0;
}