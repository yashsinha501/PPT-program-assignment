#include<bits/stdc++.h>
using namespace std;

    string reverseWords(string s) {
        int n=s.size();
        stack<char> st;
        string ans;
        for(int i=0;i<n;i++){
            
            if(s[i]==' ')
            {
                while(!st.empty()){
                    ans+=st.top();
                    st.pop();
                }
                ans+=' ';
            }
            else
                st.push(s[i]);
        
        }
        
        while(!st.empty()){
                    ans+=st.top();
                    st.pop();
                }
        
        return ans;
    }

int main(){

    string s;
    getline(cin,s);

    cout<<reverseWords(s)<<" ";
    cout<<endl;

    return 0;
}