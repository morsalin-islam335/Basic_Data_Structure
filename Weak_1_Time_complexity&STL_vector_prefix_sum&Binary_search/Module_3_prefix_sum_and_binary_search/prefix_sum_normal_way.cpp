//program for calculate prefix sum in normal way
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,query;
    cin>>n>>query;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<query;i++)
    {
        int x,y,sum=0;
        cin>>x>>y;
        for(int j=x-1;j<y;j++)
        {
            sum+=arr[j];
        }
        cout<<sum<<endl;
    }
    return 0;
}