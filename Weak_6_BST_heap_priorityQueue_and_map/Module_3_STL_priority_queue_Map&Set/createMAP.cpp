//program to create a map
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int>mp;
    mp.insert({"c",10});
    mp.insert({"b",20});
    mp.insert({"a",50});
    for(auto it  = mp.begin(); it != mp.end(); it++)
    {
        cout<<it->first<<endl;
    }
    cout<<endl;
    //(mp.count("sakib"))?cout<<"YES":cout<<"NO";
    return 0;
}