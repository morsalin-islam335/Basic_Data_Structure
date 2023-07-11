//program to revese queue
//problem link: https://www.codingninjas.com/studio/problems/reversing-a-queue_982934


#include <bits/stdc++.h> 
queue<int> reverseQueue(queue<int> q)
{
    stack<int>S;
    while(!q.empty())
    {
        S.push(q.front());
        q.pop();
    }
    while(!S.empty())
    {
        q.push(S.top());
        S.pop();
    }
    return q;
}
