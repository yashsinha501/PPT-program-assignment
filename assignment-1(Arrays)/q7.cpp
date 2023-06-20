#include<bits/stdc++.h>
using namespace std;

void moveZeros(vector<int> &arr) {
    int n=arr.size();
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)continue;
        swap(arr[i],arr[j]);
        j++;
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> a;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }

    moveZeros(a);

    for(int i=0;i<a.size();i++)cout<<a[i]<<" ";

    cout<<endl;

    return 0;
}