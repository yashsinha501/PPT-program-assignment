#include<bits/stdc++.h>
using namespace std;

        vector<vector<int>> fourSum(vector<int> &a,int tar){
    vector<vector<int>> res;

    if(a.empty())
        return res;

    int n=a.size();
    sort(a.begin(),a.end());

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){

            int tar_2 = tar-a[j]-a[i];

            int front = j+1;
            int back=n-1;

            while (front<back)
            {
                int two_sum=a[front] + a[back];

                if(two_sum<tar_2)   front++;

                else if(two_sum>tar_2)   back--;

                else
                {
                    vector<int> quadrupLet(4,0);
                    quadrupLet[0]=a[i];
                    quadrupLet[1]=a[j];
                    quadrupLet[2]=a[front];
                    quadrupLet[3]=a[back];
                    res.push_back(quadrupLet);

                    while (front<back && a[front]==quadrupLet[2]) ++front;
                    
                    
                    while (front<back && a[back]==quadrupLet[3]) --back;


                }
                
            }

            while(j+1<n && a[j+1] == a[j])  ++j;
            
        }
            while(i+1<n && a[i+1] == a[i])  ++i;
    }
            return res;
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
    vector<vector<int>> ans=fourSum(a,tar);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++)cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}