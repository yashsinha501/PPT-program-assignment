#include<bits/stdc++.h>
using namespace std;

    bool checkValidString(string s) {
        int cmin = 0, cmax = 0;
        for (char c : s) {
            if (c == '(')
                cmax++, cmin++;
            if (c == ')')
                cmax--, cmin = max(cmin - 1, 0);
            if (c == '*')
                cmax++, cmin = max(cmin - 1, 0);
            if (cmax < 0) return false;
        }
        return cmin == 0;
    }

int main(){

    string s;
    cin>>s;
    int ans=checkValidString(s);
    if(ans)cout<<"True";
    else cout<<"False";
    cout<<endl;

    return 0;
}