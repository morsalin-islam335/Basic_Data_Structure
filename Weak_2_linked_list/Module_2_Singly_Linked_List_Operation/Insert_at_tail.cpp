//program for insert at  tail in linked list
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

int main()
{
    int n;
    cin>>n;
    Node*head=NULL;
    insert_at_tail(head,n);
    
}