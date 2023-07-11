//program to implement queue by using STL list
#include<bits/stdc++.h>
using namespace  std;
class Node{
    public:
        int val;
        Node *next;
        Node *prev;

        Node(int val)
        {
            this->val=val;
            this->next=NULL;
            this->prev = NULL;
        }

};
class Queue{
    public:
        int sz=0;
        list<int>my_list;
        void push(int val)
        {
            sz++;
            my_list.push_back(val);
        }
        
        void pop()
        {
            sz--;
            my_list.pop_front();
        }
        
        int size()
        {
            return sz;
        }
        
        int front()
        {
            return my_list.front();
        }

        bool empty()
        {
            // if(sz>0)return false;
            // return true;
            return my_list.empty();
        }
        
};

int main()
{
    Queue myQueue;
    int test;cin>>test;
    while(test--)
    {
        int x;cin>>x;
        myQueue.push(x);
    }
    while(!myQueue.empty())
    {
        cout<<myQueue.front()<<" ";
        myQueue.pop();
    }
    return 0;
}