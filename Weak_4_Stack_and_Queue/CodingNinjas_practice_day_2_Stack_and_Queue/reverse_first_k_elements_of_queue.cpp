//program to reverse first kth element of queue
//problem link: https://www.codingninjas.com/studio/problems/reverse-first-k-elements-of-queue_982771

#include <bits/stdc++.h> 
queue<int> reverseElements(queue<int> q, int k)
{
    //copy N  element to a stack so that it will reverse
   stack<int>s;
   for(int i = 0; i<k; i++)
   {
       int x = q.front();
       s.push(x);
       q.pop();
   }
   //copy first N element to a queue reverse way
   queue<int>Q2;
   while(s.empty()!=true)
   {
       Q2.push(s.top());
       s.pop();

   }
   //copy orginal queue last elements
   while(!q.empty())
   {
       Q2.push(q.front());
       q.pop();
   }
   return Q2;
}
