//program for insert operation and print normal  way and reverse way of a doubly linked list
#include<bits/stdc++.h>
using namespace  std;
class Node{
    public:
        int val;
        Node *next;
        Node*prev;
        
        Node(int val)
        {
            this->val=val;
            this->next=NULL;
            this->prev=NULL;
        }

};
int size(Node*head)
{
    int sz =0;
    while(head!=NULL)
    {
        sz++;
        head=head->next;
    }
    return sz;
}

void insertAtHead(Node*&head,Node*&tail,int val)
{
    Node*newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;tail=newNode;return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}
void insertAtTail(Node*&tail,int val)
{
    Node*newNode=new Node(val);
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}
void insertAtAnyPossition(Node*head,int poss,int val)
{
    Node*newNode=new Node(val);
    for(int i=1;i<poss;i++)
    {
        head=head->next;
    }
    head->next->prev=newNode;
    newNode->next=head->next;
    newNode->prev=head;
    head->next=newNode;
}
void printOrginalAndReverse(Node*head,Node*tail)
{
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
    while(tail!=NULL)
    {
        cout<<tail->val<<" ";
        tail=tail->prev;
    }
    cout<<endl;
}
int main()
{
    Node*head=NULL,*tail=NULL;
    int query;cin>>query;
    while(query--)
    {
        int poss,val;
        cin>>poss>>val;
        if(poss==0)
        {
            insertAtHead(head,tail,val);
            printOrginalAndReverse(head,tail);
        }
        else if(poss==size(head))
        {
            insertAtTail(tail,val);
            printOrginalAndReverse(head,tail);
        }
        else if(poss>size(head))cout<<"Invalid"<<endl;

        else if(poss<size(head))
        {
            insertAtAnyPossition(head,poss,val);
            printOrginalAndReverse(head,tail);
        }

    }
    return 0;
}