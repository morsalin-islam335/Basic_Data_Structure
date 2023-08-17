//program to convert sorted array to BST
//problem link: https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

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
   
    TreeNode* insertInBST(int left, int right, vector<int>vect)
    {
        if(left > right) return NULL;
        int mid = (left + right )/2;
        TreeNode * root = new TreeNode (vect[mid]);

        TreeNode * lft = insertInBST(left, mid - 1, vect);
        TreeNode * rht = insertInBST(mid + 1, right, vect);
        root -> left = lft;
        root -> right = rht;
        return root;
    }
        TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() == 0) return NULL;
        sort(nums.begin(), nums.end());
        TreeNode * root = insertInBST(0, nums.size()-1, nums);
        return root;
    }
};