//program for check if linked list sorted or not
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
bool is_sorted(Node*head)
{
    Node*tmp=head;
    while(tmp->next!=NULL)
    {
        if(tmp->val>tmp->next->val)
        {
            return false;
            break;
        }
        tmp=tmp->next;
    }
    return true;
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
int main()
{
    Node*head=NULL;
    int n;
    while(true)
    {
        cin>>n;
        if(n==-1)
        {
            break;
        }
        insert_at_tail(head,n);
    }
    (is_sorted(head)==true)?cout<<"YES":cout<<"NO";
    // Node*tmp=head;
    // while(tmp!=NULL)
    // {
    //     cout<<tmp->val<<" ";
    //     tmp=tmp->next;
    // }
    return 0;
}