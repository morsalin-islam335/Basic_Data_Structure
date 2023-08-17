//program to implementation Binary Search Tree(BST)
#include<bits/stdc++.h>
using namespace  std;
class Node{
    public:
        int val;
        Node *left;
        Node * right;
        
        Node(int val)
        {
            this -> left = NULL;
            this -> right = NULL;
            this -> val = val;
        }

};
Node* inputTree()//according to level order
{
    int rootVal; cin>>rootVal;
    if(rootVal == -1) return NULL;
    Node * root = new Node (rootVal);
    queue<Node *>q;
    q.push(root);
    int left, right;
    while(!q.empty())
    {
        Node * front = q.front();
        q.pop();
        cin>>left>>right;
        if(left != -1)
        {
            Node * leftNode = new Node(left);
            front -> left = leftNode;
            q.push(leftNode);
        }
        if(right != -1)
        {
            Node * rightNode = new Node(right);
            front -> right = rightNode;
            q.push(rightNode);
        }
    }
    return root;

}
bool isFoundOnBST(Node * root, int searchVal)
{
    if(root == NULL) return false;//base case
    if(root -> val == searchVal) return true;
    if(searchVal < root -> val)
    {
        return isFoundOnBST(root -> left, searchVal);
    }
    else if(searchVal > root -> val)
    {
        return isFoundOnBST (root -> right, searchVal);
    }  
}
int main()
{
    Node * root = inputTree();
    int findVal; cin>>findVal;
    (isFoundOnBST(root, findVal))?cout<<"YES Found":cout<<"NOT Found";
    return 0;
}