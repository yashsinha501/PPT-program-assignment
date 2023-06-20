#include<bits/stdc++.h>
using namespace std;

bool appearTwice(vector<int> &arr) {
    int n=arr.size();
    set<int> s;
    for(int i=0;i<n;i++){
        if(s.find(arr[i])!=s.end())return true;
    }
    return false;
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

    int ans=appearTwice(a);

    if(ans==1)cout<<"False";
    else cout<<"True";

    cout<<endl;

    return 0;
}