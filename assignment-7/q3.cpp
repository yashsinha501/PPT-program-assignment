#include<bits/stdc++.h>
using namespace std;

string addStrings(string a, string b) {
    int i=a.length()-1;  
    int j=b.length()-1;
    int carry=0; 
    string res; 
    while(i>=0||j>=0){
        int sum=carry; 
        if(i>=0) sum+=a[i--]-'0'; 
        if(j>=0) sum+=b[j--]-'0';
        res+=to_string(sum%10); 
        carry=sum/10; 
    }
    if(carry>0){
        res+=to_string(carry); 
    }
    reverse(res.begin(),res.end()); 
    return res;
}

int main(){

    string a,b;
    cin>>a>>b;

    cout<<addStrings(a,b)<<" ";
    cout<<endl;

    return 0;
}