//program for create a node
#include<bits/stdc++.h>
using namespace  std;
class Node{
    public:
        int val;
        Node *next;
        
        Node(int val)
        {
            this->val=val;
            this->next=NULL;
        }

};
int main()
{
    Node a(10),b(2);
    a.next=&b;
    b.next=NULL;
    cout<<a.val<<" "<<a.next->val;
    
    return 0;
}