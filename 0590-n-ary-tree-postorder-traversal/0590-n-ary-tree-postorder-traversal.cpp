/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
 void postorder1(Node* root, vector<int>&ans){
if(root==NULL)
return ;
for(Node*child : root->children){
    postorder1(child,ans);
}

ans.push_back(root->val);
}
    vector<int> postorder(Node* root) {
        vector<int>ans;
        postorder1(root,ans);
        return ans;
    }
};