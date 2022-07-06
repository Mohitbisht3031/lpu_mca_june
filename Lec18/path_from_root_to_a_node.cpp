#include<bits/stdc++.h>

using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

  void helper(TreeNode*root,vector<int>&v,int&b){
    if(!root)return;
    
    if(root->val == b){
        v.push_back(root->val);
        return;
    }
    
    helper(root->left,v,b);
    if(v.size() > 0){
        v.push_back(root->val);
        return;
    }
    
    helper(root->right,v,b);
    if(v.size() > 0){
        v.push_back(root->val);
    }
    
    return;
}
 
vector<int> solve(TreeNode* A, int B) {
    if(!A)return {};
    
    vector<int>v;
    helper(A,v,B);
    
    return v;
}

int main(){

    return 0;
}

