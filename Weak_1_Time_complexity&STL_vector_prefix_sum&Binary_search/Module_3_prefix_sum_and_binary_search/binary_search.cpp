//program for binary search with time limit exceed
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int left,right,mid;
    while(q--)
    {   
        left=0;right=n-1;
        int x;
        cin>>x;
        while(right>left) 
        {
            mid=(left+right)/2;
            if(arr[mid]==x)
            {
                cout<<mid;
                break;
            }
            else
            {
                if(x>arr[mid])
                {
                    left=mid+1;
                }
                else
                {
                    right=mid-1;
                }
            }
        }
    }
    return 0;
}