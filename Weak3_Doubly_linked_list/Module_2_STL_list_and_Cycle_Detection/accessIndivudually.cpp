#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);
    auto it = next(lst.begin(),2);
    cout<<*it;
    return 0;
}