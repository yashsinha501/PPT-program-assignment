#include<bits/stdc++.h>
using namespace std;

    vector<int> shuffle(vector<int>& a, int n) {
        
        int len = a.size();
        
        for(int i = n; i < a.size(); i++) {
            a[i] = (a[i] * 1024) + a[i - n];
        }
        
        int index = 0;

        for(int i = n; i < a.size(); i++, index += 2) {
            a[index] = a[i] % 1024;
            a[index + 1] = a[i] / 1024;
        }
        
        return a;
        
    }

int main()
{
    int n;
    cin>>n;
    vector<int> a;
    for (int i=0;i<2*n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }

    vector<int> ans=shuffle(a,n);
    for(int i=0;i<2*n;i++){
            cout<<ans[i]<<" ";
    }
        cout<<endl;
    return 0;
}   

    

