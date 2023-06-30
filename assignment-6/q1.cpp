#include<bits/stdc++.h>
using namespace std;

    vector<int> diStringMatch(string s) {
        vector<int> res;
        int i = 0, j = s.size();
        for (char c: s) res.push_back(c == 'I' ? i++ : j--);
        res.push_back(j);
        return res;
    }

int main()
{
    string s;
    cin>>s;
    vector<int> ans=diStringMatch(s);
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}
