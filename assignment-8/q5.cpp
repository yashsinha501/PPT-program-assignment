#include<bits/stdc++.h>
using namespace std;

	int compress(vector<char>& chars) {
		if(chars.size() < 2)
			return chars.size();

		int  i = 0;
		int  j = 0;

		while(i < chars.size()) {
			chars[j] = chars[i];
			int cnt = 0;
			while(i < chars.size() && chars[i] == chars[j]) {
				cnt++;
				i++;
			}

			if(cnt == 1) {
				j++;
			} else {
				string str = to_string(cnt);
				for(auto ch: str)
					chars[++j] = ch;
				j++;
			}
		}

		return j;
	}


int main(){

    int n;
    cin>>n;
    vector<char> a;
    for(int i=0;i<n;i++){
        char x;
        cin>>x;
        a.push_back(x);
    }

    int ans=compress(a);
    cout<<ans<<endl;
    for(int i=0;i<ans;i++)cout<<a[i]<<" ";
    cout<<endl;

    return 0;
}