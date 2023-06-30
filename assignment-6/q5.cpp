#include<bits/stdc++.h>
using namespace std;

    long long int minValue(vector<int> a, vector<int> b, int n)
    {
        long long min_product=0;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i=0,j=n-1;
        while(i<n && j>=0)
        {
            min_product=min_product + (a[i]*b[j]);
            i++;j--;
        }
        return min_product;
    }

int main()
{
    int n;
    cin>>n;
    vector<int> a,b;
    for (int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
    }
    for (int i=0;i<n;i++){
            int x;
            cin>>x;
            b.push_back(x);
    }

    cout<<minValue(a,b,n);
    cout<<endl;
    return 0;
}