//program to check if stack and queue element are same  or not when they remeve element from stack and queue
//with STL

#include<bits/stdc++.h>
using namespace std;
bool isSame()
{   
    stack<int>myStack;
    queue<int>myQ;
    int a,b; cin>>a;
    int val;
    for(int i = 0; i<a; i++)
    {   
        cin>>val;
        myStack.push(val);
    }
    cin>>b;
    for(int i = 0; i<b; i++)
    {
        cin>>val;
        myQ.push(val);
    }
    if(a!=b)return false;
    else
    {
        while(!myStack.empty())
        {
            if(myStack.top()!=myQ.front())return false;
            myStack.pop();
            myQ.pop();
        }
        return true;

    }
    return true;//this line will not exicute.
}
int main()
{

    (isSame()!=false)?cout<<"YES":cout<<"NO";
    return 0;
}