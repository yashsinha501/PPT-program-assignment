#include<bits/stdc++.h>
using namespace std;

using namespace std;

bool canAttendMeetings(vector<vector<int>>& a) {

    sort(a.begin(), a.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0];
    });

    for (int i = 1; i < a.size(); i++) {
        if (a[i][0] <= a[i - 1][1]) {
            return false; 
        }
    }

    return true; 
}


int main()
{
    int n;
    cin>>n;
    vector<vector<int>> a;
    for (int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            a.push_back({x,y});
    }
    bool canAttend = canAttendMeetings(a);
    cout << (canAttend ? "true" : "false") << endl;

    return 0;
}