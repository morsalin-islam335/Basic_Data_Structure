//program to reverse doubly linked list
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
void insertAtTail(Node*&head,Node*&tail,int val)
{
    Node*newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}
void reverseIt(Node*head,Node*tail)
{
    while(head!=tail&&head->next!=tail)
    {
        swap(head->val,tail->val);
        head=head->next;
        tail=tail->prev;
    }
    swap(head->val,tail->val);
}
int main()
{
    Node*head=NULL,*tail=NULL;
    int x;
    while(true)
    {
        cin>>x;
        if(x==-1)break;
        insertAtTail(head,tail,x);
    }
    reverseIt(head,tail);
    Node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    return 0;
}