#include<bits/stdc++.h>
using namespace std;

    int maximumProduct(vector<int>& a) {
        int min1 = INT_MAX;
        int min2= min1;
        
        int max1 = INT_MIN;
        int max2 = max1; 
        int max3 = max1;
        for(int i =0; i< a.size(); i++){
         
            int val = a[i];
            if(val >= max1){
                max3 = max2; 
                max2 = max1;
                max1 = val;
            }
            else if( val >= max2){ 
                max3 = max2;
                max2 = val;
            }
            else if(val >= max3){ 
                max3 = val;
            }
            
            if(val <= min1){
              min2 = min1;
              min1 = val;
            }else if(val <= min2) {
               min2 = val;

            }
        }
        int ans = max((min1* min2* max1),(max1* max2* max3));
        return ans;
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

    int ans=maximumProduct(a);
    cout<<ans<<endl;
    return 0;
}