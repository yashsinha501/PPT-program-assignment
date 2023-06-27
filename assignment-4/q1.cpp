#include<bits/stdc++.h>
using namespace std;

vector <int> commonElements (vector<int> A, vector<int> B, vector<int> C, int n)
{
        vector<int> ans;
        int i=0,j=0,k=0;
        while(i<n&&j<n&&k<n) {
            if(A[i]==B[j]&&A[i]==C[k]) {
                ans.push_back(A[i]);
                i++;
                j++;
                k++;
                while(i<n&&A[i]==A[i-1]) {
                    i++;
                }
            }
            else if(min(A[i],min(B[j],C[k]))==A[i]) {
                i++;
            }
            else if(min(A[i],min(B[j],C[k]))==B[j]) {
                j++;
            }
            else if(min(A[i],min(B[j],C[k]))==C[k]) {
                k++;
            }
        }
        
        return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<int> a,b,c;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        b.push_back(x);
    }
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        c.push_back(x);
    }
    vector<int> ans=commonElements(a,b,c,n);
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}
