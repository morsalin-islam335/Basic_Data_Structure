//program to show O(N log N) time complexity
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)//O(N) complexity
    {                     //+
        int j=i;
        while(j>0)//O(log N) complexity.
        {           //=O(N log N) complexity.
            cout<<j%10;
            j/=10;
        }
        cout<<endl;
    }
    return 0;
}