
	int maxCount(int m, int n, vector<vector<int>>& a) {
		if(a.size() == 0) return m*n;

		int x=INT_MaX,y=INT_MaX;

		for(int i=0;i<a.size();i++){
			x = min(x,a[i][0]);
			y = min(y,a[i][1]);
		}

		return x*y;
	}
 

 