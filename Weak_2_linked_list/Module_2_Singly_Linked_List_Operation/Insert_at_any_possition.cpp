//program for insert at any possition in linked list 0 base possition
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
void insert_any_poss(Node*head,int poss,int val)
{
    Node*newNode=new Node(val);
    Node*tmp=head;
    for(int i=1;i<poss;i++)
    {
        tmp=tmp->next;
        if(tmp==NULL)
        {
            cout<<"Invalid index"<<endl;
            return;
        }
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
}
void print_link_list(Node*head)
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
    Node*head=new Node(10);
    Node*a=new Node(20);
    Node*b=new Node(30);
    head->next=a;
    a->next=b;
    b->next=NULL;
    int poss,val;
    cin>>poss>>val;
    insert_any_poss(head,poss,val);
    print_link_list(head);
    return 0;
}