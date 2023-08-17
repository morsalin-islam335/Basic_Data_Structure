//program to implement priority queue
#include<bits/stdc++.h>
using namespace std;
class PriorityQueue{
    public:
        vector<int>v;
        int size = 0;
        void push(int val)
        {   
            size ++;
            //push operation of priority queue
            v.push_back(val);
            upHeapify();
        }

        void pop()
        {   
            size --;
            //pop  operation of priority queue
            downHeapify();

        }
        int top()
        {
            return v.front();
        }
        
        bool empty()
        {
            return v.size() == 0;
        }
        void upHeapify()//for push operation
        {
            int child = v.size() -1;//last index;
            int parrent = (child -1)/2;
            while(child > 0 && v[child]> v[parrent])
            {
                swap(v[parrent], v[child]);
                child = parrent;
                parrent = (child -1) /2;
            }
        }
        void downHeapify()
        {
            if(v.size() == 1)
            {
                v.pop_back();
                return;
            }
            swap(v[0], v[v.size() -1]);
            v.pop_back();
            while(true)
            {
                int largest = 0, index = 0;//first index of vector
                int left = (index*2) +1;
                int right = (index*2)+2;

                if(left < v.size() && v[left] > v[largest]) largest = left;
                if(right < v.size() && v[right]> v[largest]) largest = right;
                if(largest == index) break;
                swap(v[index], v[largest]);
                index = largest;
            }
        }
        void printq()
        {
            for(int val:v) cout<<val<<" ";
            cout<<endl;
        }
};

int main()
{
    PriorityQueue pq;
    int n; cin>>n;
    while(n--)
    {
        int val; cin>>val;
        pq.push(val);
    }
    pq.printq();
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}