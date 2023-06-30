#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& a) {
    int l = 0, r = a.size()-1;
    while (l < r) {
        int mid = (r-l)/2 + l;
        if (a[mid] < a[r])
            r = mid;
        else
            l = mid + 1;
    }
    return a[l];
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

    cout<<findMin(a)<<" ";
    cout<<endl;
    return 0;
}