//program to introduce  about list(linked list) built-in function
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>list1;//initialing a 0 size  of list
    cout<<list1.size()<<endl;
    list<int>list2(5);//initializing a 5 size of list with gerbage value
    cout<<list2.back()<<endl;
    list<int>list3(5,10);//initializing 5 size of a list with 10
    for(int val:list3)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    list<int>list4(list3);//copy a list to another list
    for(int val:list3)
    {
        cout<<val<<" ";
    }
    int arr[4]={10,20,30,40};
    //copy from array to list
    list<int>list5(arr,arr+4);
    cout<<endl;
    for(int val:list5)
    {
        cout<<val<<" ";
    }
    return 0;
}