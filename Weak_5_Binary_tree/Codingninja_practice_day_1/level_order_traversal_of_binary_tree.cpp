//program to traverse in level order of a binary tree
//problem link: https://www.codingninjas.com/studio/problems/level-order-traversal_796002

#include <bits/stdc++.h> 
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void inorder(BinaryTreeNode <int>*root, vector<int>&v)
{
    if(root == NULL) return;
    queue<BinaryTreeNode<int>*>q;
    q.push(root);
    while(!q.empty())
    {
        v.push_back(q.front()->val);
        if(q.front()->left)
        {
            q.push(q.front()->left);
        }
        if(q.front()->right)
        {
            q.push(q.front()->right);
        }
        q.pop();
    }
}
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    vector<int>vc;
    inorder(root, vc);
    return vc;
}