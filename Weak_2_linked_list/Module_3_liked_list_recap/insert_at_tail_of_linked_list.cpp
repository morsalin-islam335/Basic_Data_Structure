//program for insert at tail in linked list
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
void insert_at_tail(Node*&head,Node*&tail,int val)
{
    Node*newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    
    }
    tail->next=newNode;
    tail=newNode->next;
}
void print(Node*x)
{
    while(x!=NULL)
    {
        cout<<x->val<<" ";
        x=x->next;
    }
    cout<<endl;
}
int main()
{
    Node*head=NULL;
    Node*tail=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head,tail,val);

    }
    print(head);
    return 0;
}