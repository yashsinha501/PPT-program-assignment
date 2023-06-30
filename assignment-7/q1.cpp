#include<bits/stdc++.h>
using namespace std;

    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length())return false;
        int m1[256]={0},m2[256]={0};int n=s.length();

        for(int i=0;i<n;i++){
            if(m1[s[i]]!=m2[t[i]])return false;
            m1[s[i]]=i+1;
            m2[t[i]]=i+1;
        }
        return true;
    }

int main(){

    string s,t;
    cin>>s>>t;
    if(isIsomorphic(s,t))cout<<"True"<<" ";
    else cout<<"False"<<" ";
    cout<<endl;

    return 0;
}
