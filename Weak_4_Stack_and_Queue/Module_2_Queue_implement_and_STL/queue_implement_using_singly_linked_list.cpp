//program to implement queue by using singly linked list
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
class myQueue{
    public:
        int sz=0;
        Node*head=NULL,*tail=NULL;

        void push(int val)
        {
            sz++;
            Node*newNode=new Node(val);
            if(head==NULL)
            {
                head=newNode;tail=newNode;return;
            }
            tail->next = newNode;
            tail = newNode;

        }
        
        void pop()
        {
            sz--;
            Node * deleteNode = head;
            head = head->next;
            if(head == NULL) tail = NULL;
            delete deleteNode;
        }

        bool empty()
        {
            if(sz>0) return false;
            else return true;
        }

        int front()
        {
            return head->val;
        }
        int size()
        {
            return sz;
        }
};
int main()
{
    myQueue my;
    int my_size;cin>>my_size;
    while(my_size--) 
    {
        int x; cin>> x;
        my.push(x);
    }
    cout<<my.size()<<endl;

    while(!my.empty())
    {
        cout<<my.front()<<" ";
        my.pop();
    }
    cout<<endl<<my.size();
    
    // while(my.head!=NULL)
    // {
    //     cout<<my.head->val<<" ";
    //     my.head = my.head->next;
    // }
    return 0;
}