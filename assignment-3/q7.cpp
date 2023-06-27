#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> findMissingRanges(vector<int>& nums, int lower, int upper) {
    vector<vector<int>> result;

    int next = lower; 

    for (int num : nums) {
        if (num > next) {
            result.push_back({next, num - 1});
        }

        next = num + 1; 

        if (next > upper) {
            break;
        }
    }

    if (next <= upper) {
        result.push_back({next, upper});
    }

    return result;
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
    int l,u;
    cin>>l>>u;
    vector<vector<int>> ans = findMissingRanges(a, l, u);
    for (vector<int>& range : ans) {
        cout << "[" << range[0] << "," << range[1] << "]" << endl;
    }
    cout<<endl;

    return 0;
}