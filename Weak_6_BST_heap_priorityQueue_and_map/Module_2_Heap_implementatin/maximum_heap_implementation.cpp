//program to implementation maximum heap
//complexity to insert of a heap is O(nlog n)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int totalval; cin>>totalval;
    int heapval;
    while(totalval--)
    {
        cin>>heapval;
        v.push_back(heapval);
        int current = v.size() - 1;//current is last value of vector
        while(current != 0)
        {
            int parrent = (current - 1)/2;//parrent  value
            if(v[parrent]<v[current]) swap(v[parrent], v[current]);
            else break;
            current = parrent;
        }
    }
    for(int val: v)cout<<val<<" ";
    return 0;
}