//program to konw about STL Stack
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>myStack;
    cout<<myStack.empty();//empty
    myStack.push(10);
    cout<<endl<<myStack.empty();//non empty
    cout<<endl<<myStack.size()<<endl;//it will print myStack size
    cout<<endl<<myStack.top()<<endl;//it will print top value
    int n;
    while(true)
    {
        cin>>n;
        if(n==1)break;
        myStack.push(n);
    }
    cout<<endl;
    while(myStack.empty()!=true)
    {
        cout<<myStack.top()<<" ";
        myStack.pop();
    }
    return 0;
}