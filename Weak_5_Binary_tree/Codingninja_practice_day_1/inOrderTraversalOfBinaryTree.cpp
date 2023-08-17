//program to traverse binary tree inorderly
//problem link: https://www.codingninjas.com/studio/problems/inorder-traversal_3839605

#include <bits/stdc++.h> 
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
void inorder(TreeNode * root, vector<int>&v)
{
    if(root == NULL) return;
    inorder(root ->left,v);
    v.push_back(root ->data);
    inorder(root ->right,v);

}
vector<int> getInOrderTraversal(TreeNode *root)
{
    vector<int>v;
    inorder(root,v);
    return v;
}
