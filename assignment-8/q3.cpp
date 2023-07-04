#include<bits/stdc++.h>
using namespace std;

int solve(string w1, string w2, int i, int j) {
	if(i == w1.size() && j == w2.size()) return 0;  
	if(i == w1.size()) return w2.size() - j;        
    if(j == w2.size()) return w1.size() - i;        
	if(w1[i] == w2[j]) return solve(w1, w2, i + 1, j + 1);  

	return 1 + min(solve(w1, w2, i + 1, j), solve(w1, w2, i, j + 1));
}

int help(string& word1, string& word2) {
	return solve(word1, word2, 0, 0);
}

int main(){

    string s1,s2;
    cin>>s1>>s2;
    cout<<help(s1,s2);
    // int ans;
    // if(ans)cout<<"True";
    // else cout<<"False";
    cout<<endl;

    return 0;
}