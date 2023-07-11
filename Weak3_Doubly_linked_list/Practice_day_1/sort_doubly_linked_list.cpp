//program to sort doubly linked list
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
int main()
{
    Node*head=NULL;
    Node*tail=NULL;
    int x;
    while(true)
    {
        cin>>x;
        if(x==-1)break;
        insertAtTail(head,tail,x);
    }
    return 0;
}