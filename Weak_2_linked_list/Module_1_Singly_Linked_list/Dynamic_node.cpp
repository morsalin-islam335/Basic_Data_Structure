//program for creating dynamic node
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
int main()
{
    Node *head=new Node(10);//
    Node *a=new Node(50);Node*b=new Node(60);
    head->next=a;//linking
    a->next=NULL;

    cout<<head->val<<" "<<head->next->val<<endl;//print normal way

    return 0;
}