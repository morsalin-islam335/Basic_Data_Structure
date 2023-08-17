//program to count leaf node of a binary tree
//problem link: https://www.codingninjas.com/studio/problems/count-leaf-nodes_893055

/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/

int noOfLeafNodes(BinaryTreeNode<int> *root){
    int size = 0;
    queue<BinaryTreeNode<int>*>q;
    if(root == NULL) return 0;
    if(root ->left == NULL && root ->right == NULL) return 1;
    q.push(root);
    while(!q.empty())
    {
        if(q.front() ->left == NULL && q.front() ->right == NULL) size++;
        if(q.front()-> left)
        {
            q.push(q.front() -> left);
        }
        if (q.front() -> right)
        {
            q.push(q.front() -> right);
        }
        q.pop();
    }
    return size;
}