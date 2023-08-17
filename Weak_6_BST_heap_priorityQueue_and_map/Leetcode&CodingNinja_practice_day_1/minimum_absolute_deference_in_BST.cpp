//program to find out minimum absolute deference in BST
//problem link: https://leetcode.com/problems/minimum-absolute-difference-in-bst/

class Solution {
public:
    vector<int>v;
    void get_min(TreeNode * root)
    {
        if(root == NULL) return;//base case 
        get_min(root -> left);
        v.push_back(root -> val);
        get_min(root -> right);
    }
    int getMinimumDifference(TreeNode* root) {
      if(root == NULL) return 0;
      else if(root -> left == NULL && root -> right == NULL) return abs(root -> val);
      v.clear();
      get_min(root);
      int mn = INT_MAX;
      for(int i = v.size() -1; i>0; i--)
      {
          mn = min(mn,v[i] - v[i-1]);
      }
      return abs(mn);
    }
};