//program to implement queue by using STL
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;cin>>test;
    queue<int>my_queue;
    while(test--)
    {
        int x;cin>>x;
        my_queue.push(x);

    }
    cout<<my_queue.size()<<endl;
    cout<<my_queue.front()<<endl;
    cout<<my_queue.empty()<<endl;//it will return false because my_queue is not empty
    cout<<"Now printing whole queue"<<endl;
    
    while(!my_queue.empty())
    {
        cout<<my_queue.front()<<" ";
        my_queue.pop(); //it will delete front value.
    }
    return 0;
}