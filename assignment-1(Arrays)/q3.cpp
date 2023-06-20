#include<bits/stdc++.h>
using namespace std;

int target(vector<int> a,int val){

    int low = 0, high = a.size()-1;

    while (low <= high) {
        int mid = low + (high-low)/2;

        if (a[mid] < val)
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
        int val;
        cin>>val;
        cout<<target(a,val)<<endl;
    

    return 0;
}