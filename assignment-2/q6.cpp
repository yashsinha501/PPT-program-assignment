#include<bits/stdc++.h>
using namespace std;

int help(vector<int>& nums, int target) {
        int n = nums.size()-1;
        int low = 0, high = n;
        while( low <= high){
            int mid = low + (high-low)/2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] > target) high = mid -1;
            else low = mid + 1;
        }
        return -1;
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
    int ans=help(a,tar);
    cout<<ans<<endl;
    return 0;
}