//program to traverse linke list in-orderly
//problem link: https://leetcode.com/problems/binary-tree-inorder-traversal/description/
class Solution {
public:
    void inorderTraversal(TreeNode * root, vector<int>&v)
    {
        if(root == NULL) return;//base case
        inorderTraversal(root -> left, v);
        v.push_back(root -> val);
        inorderTraversal(root -> right, v);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        inorderTraversal(root, v);
        return v;
    }
};