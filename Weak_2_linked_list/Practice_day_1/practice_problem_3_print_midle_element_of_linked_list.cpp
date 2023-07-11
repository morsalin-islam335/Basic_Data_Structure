//program for print middle element of linked list
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
int  size(Node*head)
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
void print_middle_element(Node*head)
{
    Node*tmp=head;
    if(size(head)%2==0)
    {
        for(int i=1;i<size(head)/2;i++)
        {
            tmp=tmp->next;
        }
        cout<<tmp->val<<" "<<tmp->next->val;
    }
    else
    {
        for(int i=1;i<=size(head)/2;i++)
        {
            tmp=tmp->next;
        }
        cout<<tmp->val;
    }
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
    print_middle_element(head);
    return 0;
}