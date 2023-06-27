#include<bits/stdc++.h>
using namespace std;

    int searchInsert(vector<int>& a, int tar) {
        int low = 0, high = a.size()-1;

        while (low <= high) {
            int mid = low + (high-low)/2;

            if (a[mid] < tar)
                low = mid+1;
            else
                high = mid-1;
        }
        return low;
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
    int tar;
    cin>>tar;
    int ans=searchInsert(a,tar);
    cout<<ans<<endl;
    return 0;
}