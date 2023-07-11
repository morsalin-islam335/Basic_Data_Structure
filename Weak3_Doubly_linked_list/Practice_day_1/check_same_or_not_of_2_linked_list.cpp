//program for check if two linked list is same  or not
#include<bits/stdc++.h>
using namespace  std;
class Node{
    public:
        int val;
        Node *next,*prev=NULL;
        
        Node(int val)
        {
            this->val=val;
            this->next=NULL;
            this->prev=NULL;
        }

};
int  size(Node*head)
{
    int sz=0;
    while(head!=NULL)
    {
        sz++;
        head=head->next;
    }
    return sz;
}

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
void isSame(Node*head1,Node*head2)
{
    if(size(head1)!=size(head2))
    {
        cout<<"NO";
        return;
    }
    bool flag=true;
    while(head1!=NULL)
    {
        if(head1->val!=head2->val)
        {
            flag=false;
            break;
        }
        head1=head1->next;
        head2=head2->next;
    }
    (flag==true)?cout<<"YES":cout<<"NO";
}
int main()
{
    Node*head1=NULL,*head2=NULL,*tail1=NULL,*tail2=NULL;
    int x,y;
    while(true)
    {
        cin>>x;
        if(x==-1)break;
        insertAtTail(head1,tail1,x);
    }

    while(true)
    {
        cin>>y;
        if(y==-1)break;
        insertAtTail(head2,tail2,y);
    }
    isSame(head1,head2);
    return 0;
}