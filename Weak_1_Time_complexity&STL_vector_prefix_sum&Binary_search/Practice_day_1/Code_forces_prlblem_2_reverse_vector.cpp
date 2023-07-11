//program for reverse vector
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    reverse(v.begin(),v.end());
    // string a="Hello";            string object reverse
    // reverse(a.begin(),a.end());      
    for(int a:v)
    {
        cout<<a<<" ";
    }
    return 0;
}