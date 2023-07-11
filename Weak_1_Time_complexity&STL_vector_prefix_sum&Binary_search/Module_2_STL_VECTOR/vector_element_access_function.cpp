//program for access element access function
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={10,20,30};
    cout<<(v[1]-v[0])*v[2];
    cout<<endl<<v.at(0)+v.at(2);
    cout<<endl<<v.back()-v.front();
    return 0;
}