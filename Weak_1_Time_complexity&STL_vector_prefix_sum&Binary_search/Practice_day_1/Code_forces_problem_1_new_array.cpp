/*
_ _ _ _ _ _ _ _ _ _ _  _ _  _ _ _  _ _
_ _ _ _ _ _ _ _ _ _ _  _ _  _ _ _  _ _
||                                   ||
||                                   ||
||      Morsalin Islam               ||
|| CST(Satkhira Polytecnic Institute)||
||                                   ||
||                                   ||
||                                   ||
||                                   ||
||                                   ||
||                                   ||
||                                   ||
||                                   ||
||                                   ||
||                                   ||
||                                   ||
_ _ _ _ _ _ _ _ _ _ _  _ _   _ _  _ _ _ 
_ _ _ _ _ _ _ _ _ _ _  _ _   _ _  _ _ _

*/
//program for concatination array by using vector
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }                   //total program time complexity 
    int arr2[n];        //=O(N)
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    vector<int>v(arr2,arr2+n);
    v.insert(v.end(),arr,arr+n);
    for(int i=0;i<2*n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}