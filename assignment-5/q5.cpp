#include<bits/stdc++.h>
using namespace std;

    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) 
    {
         sort(arr2.begin(),arr2.end());
         int result = 0;
         for(int i = 0; i<arr1.size(); i++)
        {
          int low = 0;
          int high = arr2.size()-1;
          while(low <= high)
          {
             int mid=low +(high-low)/2;
             if(abs(arr1[i]-arr2[mid]) <= d)
             {
                 break;
             }if(arr2[mid] < arr1[i]){
                 low = mid +1;
             }else{
                 high = mid-1;
             }
          }
          if(low > high){
              result++;
          }
        }
     return result;
    }

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    vector<int> a,b;
    for (int i=0;i<n1;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for (int i=0;i<n2;i++){
        int x;
        cin>>x;
        b.push_back(x);
    }
    int d;
    cin>>d;
    cout<<findTheDistanceValue(a,b,d)<<" ";
    cout<<endl;
    return 0;
}