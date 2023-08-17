//program to convert arry to BST

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node * createBST_fromArray(int left, int right, int * arr)
{
    if(left > right) return NULL;//base case
    int mid = (left + right) /2;
    Node * root = new Node(arr[mid]);
    Node * leftNode = createBST_fromArray(left, mid-1, arr);
    Node * rightNode= createBST_fromArray(mid+1, right, arr);
    root -> left = leftNode;
    root -> right = rightNode;
    return root;
}
void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "Tree nai" << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ana
        Node *f = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        cout << f->val << " ";

        // 3. tar children gulo ke rakha
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    // Node *root = convert(a, n, 0, n - 1);
    Node * root = createBST_fromArray(0,n-1,a);
    level_order(root);
    return 0;
}