#include<bits/stdc++.h>
using namespace std;

int removeOcuur(vector<int> &a,int val){

    int n=a.size();

    int cnt=0,j=0;

    for (int i=0;i<n;i++)
    {
        if(a[i]==val){
            cnt++;
        }   
        else{
            a[j]=a[i];
            j++;
        }
    }

    return cnt;

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

    int cnt=removeOcuur(a,val);

    cout<<cnt<<endl;

    for(int i=0;i<cnt;i++)cout<<a[i]<<" ";
    cout<<endl;

    return 0;
}