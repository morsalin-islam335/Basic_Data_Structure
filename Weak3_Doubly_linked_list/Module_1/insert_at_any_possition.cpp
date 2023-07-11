//program for insert at any possition of doubly linked list
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
    int sz=0;
    while(head!=NULL)
    {
        sz++;
        head=head->next;
    }
    return sz;
}

void print(Node*head,Node*tail)
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
}

void insert_at_any_possition(Node*&head,Node*&tail,int poss,int val)
{
    Node*newNode=new Node(val);
    if(poss==0)
    {
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
    else if(poss==size(head)){
        cout<<"Invalid index"<<endl;
    }
    else
    {
        Node*tmp=head;
        for(int i=1;i<poss;i++)
        {
            tmp=tmp->next;
        }
        newNode->next=tmp->next;
        tmp->next->prev=newNode;//conecting previous Node
        tmp->next=newNode;
        newNode->prev=tmp;
    }
}

int main()
{
    Node*head=new Node(10);
    Node*a=new Node(20);
    Node*b=new Node(30);
    Node*c=new Node(40);
    Node*d=new Node(50);
    Node*e=new Node(60);
    Node*tail=new Node(70);

    head->next=a;a->prev=head;
    a->next=b;b->prev=a;
    b->next=c;c->prev=b;
    c->next=d;d->prev=c;
    d->next=e;e->prev=d;
    e->next=tail;tail->prev=e;
    //insert_at_any_possition(head,tail,7,100);
    int test;cin>>test;
    while(test--)
    {
        int poss,val;
        cin>>poss>>val;
        insert_at_any_possition(head,tail,poss,val);
    }
    print(head,tail);
    return 0;
}