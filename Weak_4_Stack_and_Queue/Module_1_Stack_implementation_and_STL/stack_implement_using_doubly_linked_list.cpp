//program to implement stack by using doubly linked list
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        Node*next,*prev;
        int val;
        Node(int val)
        {
            this->next=NULL;
            this->prev=NULL;
            this->val=val;
        }
};

class myStack
{
    public:
        int sz=0;
        Node*head=NULL;
        Node*tail=NULL;

        void push(int val)
        {
            sz++;
            Node*newNode=new Node(val);
            if(head==NULL)
            {
                head=newNode;tail=newNode;return;
            }
            tail->next=newNode;newNode->prev=tail;tail=newNode;
        }
        void pop()
        {
            sz--;
            Node*deleteNode=tail;
            tail=tail->prev;
            if(tail==NULL)head=NULL;
            else tail->next=NULL;

        }

        int top()
        {
            return tail->val;
        }

        int  size()
        {
            return sz;
        }
        
        bool empty()
        {
            if(sz>0)return false;
            else return true;
        }

       
};

int main()
{
    myStack st;
    int n;cin>>n;
    while(n--)
    {
        int x;cin>>x;st.push(x);
    }
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop(); 
    }
    return  0;
}