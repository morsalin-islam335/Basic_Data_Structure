//program to reverse stack with STL
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>myStack,second;
    int x; cin>>x;
    int val;
    while(x--)
    {
        cin>>val;
        myStack.push(val);
    }
    while(!myStack.empty())
    {
        second.push(myStack.top());
        myStack.pop();
    }
    while(!second.empty())
    {
        cout<<second.top()<<" ";
        second.pop();
    }
    return 0;
}