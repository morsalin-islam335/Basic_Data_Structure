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
void insert_at_tail(Node*&head,Node*&tail,int val)
{
    Node*newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;tail=newNode;
        return;
    }
    Node*tmp=tail;
    tail->next=newNode;
    tail=newNode;
    tail->prev=tmp;
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
int main()
{
    int n;
    cin>>n;
    Node*head=NULL;
    Node*tail=NULL;
    int val;
    while(n--)
    {
        cin>>val;
        insert_at_tail(head,tail,val);
    }
    print(head,tail);
    return 0;
}