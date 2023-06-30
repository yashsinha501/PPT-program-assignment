#include<bits/stdc++.h>
using namespace std;

    int findMaxLength(vector<int>& a) {
		vector<int> arr(2*a.size() + 1, INT_MIN);
		arr[a.size()] = -1;
        int maxLen = 0, sum = 0;
        for (int i = 0; i < a.size(); i++) {
            sum += (a[i] == 0 ? -1 : 1);
			if (arr[sum + a.size()] >= -1)  maxLen = max(maxLen, i - arr[sum + a.size()]);
			else  arr[sum + a.size()] = i; 
        }
        return maxLen;
    }

int main()
{
    int n;
    cin>>n;
    vector<int> a;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }

    cout<<findMaxLength(a);
    cout<<endl;
    return 0;
}