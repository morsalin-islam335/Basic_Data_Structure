//program to know work of STT priority queue
#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int>pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);
    pq.push(60);
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;

    // now we will work according to deasscending order
    priority_queue<int, vector<int>, greater<int>>pq2;
    pq2.push(10);
    pq2.push(20);
    pq2.push(30);
    pq2.push(40);
    pq2.push(50);
    pq2.push(60);
    pq2.push(70);
    while(!pq2.empty())//it will print deasscending order
    {
        cout<<pq2.top()<<" ";
        pq2.pop();
    }
    return 0;
}