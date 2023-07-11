//program to check if a doubly linked list is palindrome or not
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
void isPalindrome(Node*i,Node*j)
{
    bool flag=true;
    while(i!=j&&i->next!=j)
    {
        if(i->val!=j->val)
        {
            flag=false;
            break;
        }
        i=i->next;
        j=j->prev;
    }
    if(i->val!=j->val)flag=false;
    (flag==true)?cout<<"YES":cout<<"NO";
}
void insertAtTail(Node*&head,Node*&tail,int val)
{
    Node*newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode,tail=newNode;return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
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
    isPalindrome(head,tail);
    return 0;
}