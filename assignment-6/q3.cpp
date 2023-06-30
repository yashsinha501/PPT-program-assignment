#include<bits/stdc++.h>
using namespace std;

    bool validMountainArray(vector<int>& A) {
        int n = A.size(), i = 0, j = n - 1;
        while (i + 1 < n && A[i] < A[i + 1]) i++;
        while (j > 0 && A[j - 1] > A[j]) j--;
        return i > 0 && i == j && j < n - 1;
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
    bool ans=validMountainArray(a);
    if(ans)cout<<"True";
    else cout<<"False";
    cout<<endl;
    return 0;
}