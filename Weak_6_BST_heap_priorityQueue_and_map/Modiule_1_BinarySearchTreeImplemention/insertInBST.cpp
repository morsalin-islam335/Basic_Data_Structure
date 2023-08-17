//program to insert in BST
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
void insertInBST(Node *& root, int value)
{
    if(root == NULL)
    {
        root = new Node(value);
        return;
    }
    if(value < root -> val)
    {
        if(root -> left == NULL)
        {
            root -> left = new Node (value);
        }
        else insertInBST(root -> left, value);
    }
    else if(value > root -> val)
    {
        if(root -> right == NULL)
        {
            root -> right = new Node(value);
        }
        else insertInBST(root -> right, value);
    }
}
void  printInLevelOrderTraversal(Node *root)
{
    queue<Node*>q;
    q.push(root);    
    while(!q.empty())
    {
        cout<<q.front()->val<<" ";
        if(q.front() -> left) q.push(q.front() -> left);
        if(q.front() -> right) q.push(q.front() -> right);
        q.pop();
    }
}
int main()
{
    Node * root = inputTree();
    int insertVal; cin>> insertVal;
    insertInBST(root, insertVal);
    printInLevelOrderTraversal(root);

    return 0;
}