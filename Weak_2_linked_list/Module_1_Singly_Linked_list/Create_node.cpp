//program for create a node
class Node{
    public:
        int val;
        Node *next;

};
#include<bits/stdc++.h>
using namespace std;
int main()
{
    Node a,b;
    a.val=50;
    b.val=100;
    a.next=&b;
    b.next=NULL;
    cout<<a.val<<" "<<a.next->val;
    
    return 0;
}