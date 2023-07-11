//program for insert at any possition of linked list
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
int size(Node*head)
{
    int sz=0;
    Node*tmp=head;
    while(tmp!=NULL)
    {
        tmp=tmp->next;
        sz++;
    }
    return sz;
}
void insert_at_head(Node*&head,int val)
{
   Node*newNode=new Node(val);
   Node*tmp=head;
   head=newNode;
   newNode->next=tmp;
}



void insert_at_tail(Node*&head,int val)
{
    Node*newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node*tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newNode;
}
void insert_at_any_possition(Node*head,int poss,int val)
{
    Node*newNode=new Node(val);
    Node*tmp=head;
    if(poss==1)
    {
        newNode->next=tmp->next;
        head->next=newNode;
    }
    else if(poss-1<size(head))
    {
        for(int i=1;i<poss;i++)
        {
            tmp=tmp->next;
        }
        newNode->next=tmp->next;
        tmp->next=newNode;
    }
    else if(poss==size(head))
    {
        while(tmp!=NULL)
        {
            tmp=tmp->next;
        }
        tmp->next=newNode;
    }
}
void  print_linked_list(Node*head)
{
    Node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int main()
{
    Node*head=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head,val);
    }
    int query,poss,value;
    cin>>query;
    for(int i=0;i<query;i++)
    {
        cin>>poss>>value;
        if(poss==0)
        {
            insert_at_head(head,value);
            print_linked_list(head);
        }
        else if(poss<=size(head))
        {
            insert_at_any_possition(head,poss,value);
            print_linked_list(head);
        }
        else cout<<"Invalid"<<endl;
    }
    return 0;
}