#include<bits/stdc++.h>
using namespace std;

bool rotateString(string A, string B) 
    {
        if(A.size() != B.size())
            return false;
        if(A == B)     
            return true;
        
        int len = B.size();
        while(len--)
        {
            if(A == B)
                return true;
            A = A.substr(1) + A[0];     
        }
        return false;
    }

int main(){

    string A,B;
    cin>>A>>B;
    int ans=rotateString(A,B);
    if(ans)cout<<"True"<<" ";
    else cout<<"False"<<" ";
    cout<<endl;

    return 0;
}