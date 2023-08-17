#include<bits/stdc++.h>
using namespace  std;
class Node{
    public:
        int val;
        Node *left;
        Node *right;
        
        Node(int val)
        {
            this->val = val;
            this ->right = NULL;
            this->left = NULL;
        }

};
void print (Node * root)//in order traversal
{
    if(root == NULL) return;
    print(root->left);
    cout<<root->val<<" "; 
    print(root->right);

}
Node* inputTree()
{
    int val;
    cin >> val;
    queue<Node*>q;
    if(val == -1) return NULL;
    Node * root = new Node(val);
    q.push(root);
    int left, right;
    while(!q.empty())
    {
        cin >> left >> right;
        Node * front = q.front();
        q.pop();
        if(left != -1)
        {
            Node * l = new Node (left);
            front -> left = l;
            q.push(l);
        }
        if(right != -1)
        {
            Node * r = new Node (right);
            front -> right = r;
            q.push(r);
        }
    }
    return root;

}
int main()
{
    Node * root = inputTree();
    print(root);
    return 0;
}