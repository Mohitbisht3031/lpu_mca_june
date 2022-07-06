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
    pair<int,bool> helper(TreeNode* root){
        
        if(!root){
            pair<int,bool>ans;
            ans.first = 0;
            ans.second = true;
            return ans;
        }
//         
        
        pair<int,bool>lans = helper(root->left);
        pair<int,bool>rans = helper(root->right);
        
        int currH = max(lans.first,rans.first)+1;
        
        if(lans.second && rans.second){
            if(abs(lans.first - rans.first) <= 1){
                return {currH,1};
            }else return {currH,0};
        }
        
        return {currH,0};
    }
    
    bool isBalanced(TreeNode* root) {
        if(!root)return 1;
        
        pair<int,bool> ans = helper(root);
        
        return ans.second;
    }

int main(){

    return 0;
}

