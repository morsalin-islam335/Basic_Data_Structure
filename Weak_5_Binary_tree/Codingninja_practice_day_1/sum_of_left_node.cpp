//program to calculate sum from a binary tree
//problem link: https://www.codingninjas.com/studio/problems/left-sum_920380
#include <bits/stdc++.h> 
/*
	Tree Node class.

	class BinaryTreeNode 
	{
		T data;
		BinaryTreeNode<T> *left;
		BinaryTreeNode<T> *right;

		BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
		}
	}
*/

void sum(BinaryTreeNode<int>* root, long long int  *n)
{
	if(root == NULL) return;
	if(root -> left != NULL )
	{
		*n+= root -> left -> data;
	}
	sum(root -> left, n);
	sum(root -> right, n);

	
}
long long leftSum(BinaryTreeNode<int> *root)
{
	if(root == NULL || (root ->left == NULL) && (root -> right == NULL)) return 0;
	long long int  n = 0;
	sum(root, &n);
	return n;
}