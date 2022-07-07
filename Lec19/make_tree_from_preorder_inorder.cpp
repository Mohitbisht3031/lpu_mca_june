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

   TreeNode* helper(vector<int>&pre,vector<int>&in,int inS,int inE, int preS,int preE){
        
       if(inS > inE)return NULL;
       
       int val = pre[preS];
       TreeNode*root = new TreeNode(val);
       
       int i = inS;
       for(;i<=inE;i++){
           if(in[i] == val)break;
       }
       
       int linS = inS;
       int linE = i-1;
       int rinS = i+1;
       int rinE = inE;
       
       int l = (linE - linS);
       int lpreS = preS+1;
       int lpreE = lpreS+l;
       int rpreS = lpreE+1;
       int rpreE = preE;
       
       root->left = helper(pre,in,linS,linE,lpreS,lpreE);
       root->right = helper(pre,in,rinS,rinE,rpreS,rpreE);
       
       return root;
    }
    
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        return helper(preorder,inorder,0,inorder.size()-1,0,preorder.size()-1);
        
    }
int main(){

    return 0;
}

