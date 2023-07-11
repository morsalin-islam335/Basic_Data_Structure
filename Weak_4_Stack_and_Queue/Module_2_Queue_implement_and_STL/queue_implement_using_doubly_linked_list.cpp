//program to implement queue by using doubly linked list
#include<bits/stdc++.h>
using namespace  std;
class Node{
    public:
        int val;
        Node *next,*prev;
        
        Node(int val)
        {
            this->val=val;
            this->next=NULL;
            this->prev = NULL;
        }

};
class myQueue{
    public:

        int sz=0;
        Node * head = NULL, * tail = NULL;

        void push(int val)
        {
            sz++;
            Node * newNode = new Node(val);
            if(head==NULL)
            {
                head = newNode,tail=newNode; return;
            }
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }

        void pop()
        {
           sz--;
           Node * deleteNode = head;
           head = head->next;
           if(head!=NULL)
           {
                head->prev = NULL;
           }
           else
           {
            tail = NULL;
           }
          delete deleteNode; 

        }
        int front()
        {
            return head->val;
        }

        int size()
        {
            return sz;
        }
        
        bool empty()
        {
            if(sz>0)return false;
            return true;
        }

};
int main()
{
    myQueue my;
    int test;cin>>test;
    while(test--)
    {
        int x;
        cin>>x;
        my.push(x);
    }

    while(my.size()>0)
    {
        cout<<my.front()<<endl;
        my.pop();
    }
    my.push(100);
    cout<<my.front();
    my.pop();
    cout<<my.size()<<endl;
    cout<<my.empty();
    return 0;
}