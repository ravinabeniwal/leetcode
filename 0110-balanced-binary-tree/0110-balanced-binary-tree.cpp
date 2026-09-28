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
class Solution {
public:
  int check(TreeNode* root,bool &count){
      if(root==NULL)
      return 0;
      int left=check(root->left,count);
      int right=check(root->right,count);
      if(abs(left-right)>1)
      count=0;
      return 1+max(left,right);
      
  }
    bool isBalanced(TreeNode* root) {
        
        bool count=1;
        check(root,count);
        return count;
    }
};