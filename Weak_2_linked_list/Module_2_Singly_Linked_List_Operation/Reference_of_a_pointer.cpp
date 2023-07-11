//Program for reference of a pointer
#include<bits/stdc++.h>
using namespace std;
void fun(int*&p)
{
    *p=100;
    cout<<&p<<endl;//ptr address and p address will same;
}
int main()
{
    int a=30;
    int*ptr=&a;
    cout<<&ptr<<endl;;
    fun(ptr);
    cout<<a;
    return 0;
}