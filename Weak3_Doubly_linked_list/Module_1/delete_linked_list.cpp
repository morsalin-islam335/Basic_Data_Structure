//program to show how to delete linked list node
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

void deletenode(Node*&head,Node*&tail,int poss)
{
    if(poss==0)
    {
        Node*tmp=head;
        head=head->next;
        head->prev=NULL;
        delete tmp;
        return;
    }
    else if(poss+1==size(head))
    {
        Node*tmp=tail;
        tail=tail->prev;
        delete tmp;
        tail->next=NULL;
    }
    else if(poss>=size(head))
    {
        cout<<"Invalid index"<<endl;
    }
    else
    {   
        Node*tmp=head;
        for(int i=1;i<poss;i++)
        {
            tmp=tmp->next;
        }
        Node*deleteNode=tmp->next;
        tmp->next=tmp->next->next;
        tmp->next->prev=tmp;
        delete deleteNode;
    }

}
void print(Node*head,Node*tail)
{
    //print normally
    Node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
    tmp=tail;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
}
int main()
{
    Node*head=new Node(10);
    Node*a=new Node(20);
   // Node*a=new Node(30);
    Node*b=new Node(30);
    Node*c=new Node(40);
    Node*tail=new Node(50);
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;
    c->next=tail;
    tail->prev=c;
    int poss;
    int x=4;
    while(x--)
    {   cin>>poss;
        deletenode(head,tail,poss);
        print(head,tail);
    }
    return 0;
}