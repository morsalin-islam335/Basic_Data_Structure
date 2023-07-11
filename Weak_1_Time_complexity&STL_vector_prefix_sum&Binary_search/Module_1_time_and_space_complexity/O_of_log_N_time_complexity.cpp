//program to show O(log N) time complexity
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n>0)//O(log N) time complexity.
    {
        cout<<n%10;
        n/=10;
    }
    return 0;
}