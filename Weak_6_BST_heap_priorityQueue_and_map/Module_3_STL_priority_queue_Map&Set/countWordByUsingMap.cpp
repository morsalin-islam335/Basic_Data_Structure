//program for count word by using map
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    map<string,int>mp;
    string word;
    while(ss>>word)
    {
        mp[word]++;
    }
    // for(auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout<<it->first<<" "<<it->second<<" ";
    // }
    cout<<mp["hello"];
    return 0;
}