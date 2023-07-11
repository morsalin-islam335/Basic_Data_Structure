//program for find out size of link list
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
    Node*head=NULL;
    int cnt=0;
    int n;
    while(true)
    {
        cin>>n;
        if(n==-1)
        {
            break;
        }
        insert_at_tail(head,n);
        cnt++;

    }
    cout<<cnt;
    return 0;
}