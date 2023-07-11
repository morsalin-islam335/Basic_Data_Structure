//program for replace vector valude
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    int i=0;
    while(i<v.size())
    {
        cin>>v[i];
        i++;
    }
    // replace(v.begin(),v.end(),2,-1);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>0)
        {
            replace(v.begin()+i,v.begin()+i+1,v[i],1);

        }
        else if(v[i]<0)
        {
            replace(v.begin()+i,v.begin()+i+1,v[i],2);
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}