//program to introduce about list modifiers functions
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>list1={1,2,3,4,5,6,7,8,9,0};
    list<int>list2=list1;//assigning
    for(int val:list2)
    {
        cout<<val<<"  ";
    }
    cout<<endl;
    list<int>list3;
    list3.assign(list1.begin(),list1.end());//assigning by using function
    for(int val:list3)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    list3.push_back(30);//insert_at_tail
    for(int val:list3)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    list3.push_front(50);//insert at head
    for(int val:list3)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    list3.pop_back();//delete tail
    for(int val:list3)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    list3.pop_front();//delete head
    for(int val:list3)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    list3.insert(next(list3.begin(),3),list1.begin(),list1.end());//inserting 
    for(int val:list3)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    replace(next(list3.begin(),3),list3.end(),1,2);//it will replace 1 by 2 everywhere
    for(int val:list3)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    list3.erase(next(list3.begin(),3),list3.end());//it will erase value
    for(int val:list3)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    // now we will find value
    auto it=find(list3.begin(),list3.end(),1);
    if(it!=list3.end())
    {
        cout<<"found"<<endl;
    }
    else cout<<"Not found"<<endl;
    return 0;
}