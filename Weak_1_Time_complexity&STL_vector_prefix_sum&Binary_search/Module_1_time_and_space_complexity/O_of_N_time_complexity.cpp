//program for calculate O(N) time complexity
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;//O(1)
    cin>>n;//O(1)
    int arr[n];//O(1)
    for(int i=0;i<n;i++)//O(N) complexity.
    {
        cin>>arr[i];
    }
    for(int j=0;j<n;j++)//O(N) complexity.
    {
        cout<<arr[j]<<" ";
    }
    return 0;
}