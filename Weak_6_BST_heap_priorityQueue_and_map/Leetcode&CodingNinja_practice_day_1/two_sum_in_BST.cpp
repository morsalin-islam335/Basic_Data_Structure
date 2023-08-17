//progam to find out if two value's sum = target exist in linked list or not
//problem linl: https://leetcode.com/problems/two-sum-iv-input-is-a-bst/

class Solution {
public:
    void preorder(TreeNode * root, vector<int>&v)
    {
        if(root == NULL)  return;
        v.push_back(root -> val);
        preorder(root -> left, v);
        preorder(root -> right,v);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>v;
        preorder(root, v);
        sort(v.begin(),v.end());
        int i = 0, j = v.size() -1;
        while(i<j)
        {
            if(v[i] + v[j] == k) return true;
            if(v[i] + v[j] > k) j--;
            else i++;
        }
        return false;
    }
};