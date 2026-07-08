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
void postorder1(TreeNode* root, vector<int>&ans){
if(root==NULL)
return ;

postorder1(root->left,ans);
postorder1(root->right,ans);
ans.push_back(root->val);
}
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        postorder1(root,ans);
        return ans;
    }
};