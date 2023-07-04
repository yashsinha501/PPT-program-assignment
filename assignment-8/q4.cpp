#include <bits/stdc++.h>
using namespace std;
class TreeNode{
   public:
      int val;
      TreeNode *left, *right;
      TreeNode(int data){
         val = data;
         left = NULL;
         right = NULL;
      }
};


    void levelOrder(TreeNode* root) {
        if(root==nullptr)return;
        queue<TreeNode*> st;
        st.push(root);

        while(!st.empty()){
            vector<int> t;
            int n=st.size();
            for(int i=0;i<n;i++){
                TreeNode* tmp=st.front();
                st.pop();
                if(tmp->left!=nullptr)st.push(tmp->left);
                if(tmp->right!=nullptr)st.push(tmp->right);
                if(tmp==NULL)cout<<"NULL"<<" ";
                else cout<<tmp->val<<" ";
            }
            // ans.push_back(t);
        }
        return;
    }

   TreeNode* solve(string s, int& idx){
      if (idx >= s.size())
         return NULL;
      string num = "";
      while (idx < s.size() && s[idx] != '(' && s[idx] != ')') {
         num += s[idx];
         idx++;
      }
      TreeNode* node = new TreeNode(stoi(num));
      if (idx < s.size() && s[idx] == '(') {
         idx++;
         node->left = solve(s, idx);
         idx++;
         if (idx < s.size() && s[idx] == '(') {
            idx++;
            node->right = solve(s, idx);
            idx++;
         }
      }
      return node;
   }

   TreeNode* str2tree(string s) {
      int idx = 0;
      TreeNode* temp = new TreeNode(-1);
      return solve(s, idx);
   }


int main(){

   string s;
   cin>>s;
   TreeNode *root = str2tree(s);
   levelOrder(root);
}

