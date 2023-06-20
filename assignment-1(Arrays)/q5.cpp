#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1,vector<int>& nums2,int n,int m) {
    int tar=m+n-1;
    int i=m-1;
    int j=n-1;
        
    while(j>=0){
        nums1[tar--] = i>=0 and nums1[i]>nums2[j]?nums1[i--]:nums2[j--];
    } 
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> arr1,arr2;
    for(int i=0;i<(m+n);i++){
        int x;
        cin>>x;
        arr1.push_back(x);
    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr2.push_back(x);
    }
    merge(arr1, arr2, n, m);

    for (int i = 0; i < n+m; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    return 0;
}
