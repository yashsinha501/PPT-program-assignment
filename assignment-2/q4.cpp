#include<bits/stdc++.h>
using namespace std;

bool canPlant(vector<int>& a,int tmp) {
    a.insert(a.begin(),0);
    a.push_back(0);
    for(int i = 1; i < a.size()-1; ++i)
    {
        if(a[i-1] + a[i] + a[i+1] == 0)
        {
            --tmp;
            ++i;
        }
                
    }
    return tmp <=0;
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
    int tmp;
    cin>>tmp;
    bool ans=canPlant(a,tmp);
    if(ans) cout<<"True"<<endl;
    else cout<<"False"<<endl;
    return 0;
}