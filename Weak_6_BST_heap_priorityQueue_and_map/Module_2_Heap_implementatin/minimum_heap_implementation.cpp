//program to implementation minimum heap
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int totalSize; cin>>totalSize;
    int vectorval;
    while(totalSize --)
    {
        cin>>vectorval;
        v.push_back(vectorval);
        int current = v.size() -1;
        while(current != 0)
        {
            int parrent = (current -1) /2;
            if(v[current]< v[parrent]) swap(v[parrent],v[current]);
            else break;
            current = parrent;
        }
    }
    for(int val:v)cout<<val<<" ";
    return 0;
}