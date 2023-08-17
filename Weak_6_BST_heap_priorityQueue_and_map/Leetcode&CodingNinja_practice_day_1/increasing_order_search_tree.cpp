//program to build increasing_order BST
//problem link: https://leetcode.com/problems/increasing-order-search-tree

class Solution {
public:

    void inorderTraversal(TreeNode * root, TreeNode *&tmp)
    {
        if(root == NULL) return;//base case
        inorderTraversal(root -> left, tmp);
        TreeNode * t = new TreeNode(root ->  val);
        tmp -> right = t;
        tmp = tmp -> right;//tmp - > left is already NULL
        inorderTraversal(root -> right, tmp);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        if (root == NULL) return NULL;
        else if(root -> left == NULL && root -> right == NULL) return root;

        TreeNode * tmp = new TreeNode(10);
        TreeNode *tmp2 = tmp;
        inorderTraversal(root,tmp2);
        return tmp -> right;

    }
};

