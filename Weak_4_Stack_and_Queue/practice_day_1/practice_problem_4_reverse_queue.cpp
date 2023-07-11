//program to reverse queue with STL
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>myQ;
    stack<int>myS;
    int n ;cin>>n;
    int val;
    while(n--)
    {
        cin>>val;
        myQ.push(val);
    }
    while(!myQ.empty())
    {
        myS.push(myQ.front());
        myQ.pop();
    }
    while(!myS.empty())
    {
        myQ.push(myS.top());
        myS.pop();
    }
    while(!myQ.empty())
    {
        cout<<myQ.front()<<" ";
        myQ.pop();
    }
    return 0;
}