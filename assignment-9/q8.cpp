       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int> ans;
            int i = 0, j = 0, k = 0;
            while(i < n1 && j < n2 && k < n3){
                if(A[i] == B[j] && B[j] == C[k]){
                    ans.push_back(A[i]);
                    i++;
                    j++;
                    k++;
                }
                else if (A[i] < B[j]){
                    i++;
                }
                else if (B[j] < C[k]){
                    j++;
                }
                else{
                    k++;
                }
                int a = A[i-1];
                while(A[i] == a){
                    i++;
                }
                int b = B[j-1];
                while(B[j] == b){
                    j++;
                }
                int c = C[k-1];
                while(C[k] == c){
                    k++;
                }
            }
            return ans;
        }