//program for detected cycle of linked list
//if a linked list connect like cycle that is cycle linked list
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
void check_cycle(Node*slow)
{
    Node*first=slow;
    while(first!=NULL&&first->next!=NULL)
    {
        first=first->next->next;
        slow=slow->next;
        if(slow==first)
        {
            cout<<"cycle detected";
            break;
        }
    }
    if(first==NULL||first->next==NULL)
    {
        cout<<"Not cycle";
    }
}
int main()
{
    Node*head=new Node(10);
    Node*a=new Node(20);
    Node*b=new Node(30);
    Node*c=new Node(40);
    Node*d=new Node(50);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=a;
    check_cycle(head);
    return 0;
}