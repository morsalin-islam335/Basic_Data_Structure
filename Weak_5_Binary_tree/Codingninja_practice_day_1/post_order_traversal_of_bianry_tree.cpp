//program to traverse binary tree in post order
//problem link: https://www.codingninjas.com/studio/problems/name_2035933
#include <bits/stdc++.h> 
/*
Following is the structure of Tree Node

class TreeNode 
{
   public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) 
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
*/

void postOrder(TreeNode* root, vector<int>&vc)
{
    if(root == NULL) return;
    postOrder(root->left, vc);
    postOrder(root->right, vc);
    vc.push_back(root->val);
}
vector<int> postorderTraversal(TreeNode* root)
{
    vector<int>v;
    postOrder(root, v);
    return v;
    
}
;
