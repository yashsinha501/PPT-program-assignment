#include<bits/stdc++.h>
using namespace std;

    vector<int> plusOne(vector<int>& a) {
        
       for(int i = a.size() - 1; i >= 0; i--) {
            if (++a[i] %= 10)
                return a;
        }
        
        a[0] = 1;
        a.push_back(0);
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
    vector<int> ans=plusOne(a);
    for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}