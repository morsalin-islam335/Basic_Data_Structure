//program to introduce list capacity function
#include<bits/stdc++.h>
using namespace std;
int main()
{

    list<int>list1={10,20,30,40};
    cout<<list1.size()<<endl;//it will return list size
    cout<<list1.max_size()<<endl;//it will return maximum size of list
    list1.clear();//it will clear whole list
    cout<<list1.size()<<endl;
    cout<<list1.empty()<<endl;//it will return true false by checking if the size of list is 0
    list1.resize(6,12);//it will resize whole list
    for(int val:list1)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}