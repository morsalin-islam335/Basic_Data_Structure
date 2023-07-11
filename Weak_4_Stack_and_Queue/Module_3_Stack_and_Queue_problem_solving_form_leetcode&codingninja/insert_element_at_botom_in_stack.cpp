//problem to insert element at botom in stack
//problem link: https://www.codingninjas.com/studio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166

#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    stack<int>second;
    while(!myStack.empty())
    {
        second.push(myStack.top());
        myStack.pop();
    }
    myStack.push(x);
    while(!second.empty())
    {
        myStack.push(second.top());
        second.pop();
    }
    return myStack;
}
