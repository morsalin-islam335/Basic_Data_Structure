//program for calculte prifix sum of an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,q;
    cin>>n>>q;
    long long*arr=new long long[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long *prif_sum=new long long[n];
    prif_sum[0]=arr[0];
    long long i=1;
    while(i<n)
    {
        prif_sum[i]=arr[i]+prif_sum[i-1];
        i++;
    }
    while(q--)
    {
        long long x,y;
        cin>>x>>y;
        if(x==1)
        {
            cout<<prif_sum[y-1]<<endl;
        }
        else cout<<prif_sum[y-1]-prif_sum[x-2]<<endl;
    }
    delete[] arr;
    delete[]  prif_sum;
    return 0;
}