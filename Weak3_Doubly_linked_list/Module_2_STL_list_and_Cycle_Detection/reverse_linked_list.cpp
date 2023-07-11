//program to reverse linked list
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
void recursion(Node*&head,Node*cur)
{
    if(cur->next==NULL)
    {
        head=cur;
        return;
    }
    recursion(head,cur->next);
    cur->next->next=cur;
    cur->next=NULL;
}
void print(Node*head)
{
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main()
{
    Node*head=new Node(10);
    Node*a=new Node(20);
    Node*b=new Node(30);
    Node*c=new Node(40);
    Node*tail=new Node(50);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=tail;
    tail->next=NULL;
    print(head);
    recursion(head,head);
    print(head);
    return 0;
}