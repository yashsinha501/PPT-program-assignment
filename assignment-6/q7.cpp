#include<bits/stdc++.h>
using namespace std;

        vector<vector<int> > generateMatrix(int n) {
            vector<vector<int> > ret( n, vector<int>(n) );
        	int k = 1, i = 0;
        	while( k <= n * n )
        	{
        		int j = i;

        		while( j < n - i )             
        			ret[i][j++] = k++;
        		j = i + 1;
        		while( j < n - i )             
        			ret[j++][n-i-1] = k++;
        		j = n - i - 2;
        		while( j > i )                  
        			ret[n-i-1][j--] = k++;
        		j = n - i - 1;
        		while( j > i )                 
        			ret[j--][i] = k++;
        		i++;      
        	}
        	return ret;
        }

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> ans=generateMatrix(n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)cout<<ans[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}