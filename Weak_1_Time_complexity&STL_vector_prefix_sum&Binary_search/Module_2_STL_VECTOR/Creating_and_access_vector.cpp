//program for creating and access vector
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //creating vector
    vector<int>fun(4,6);//element 4, value 6
    for(int i=0;i<4;i++)//access vector
    {
        cout<<fun[i]<<" ";
    }
    cout<<endl<<fun.size();//size of vector
    return 0;
}