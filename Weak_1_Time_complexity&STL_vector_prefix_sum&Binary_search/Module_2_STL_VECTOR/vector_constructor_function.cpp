//program for access vector with constructor function
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //creating vector
    vector<int>v(4,5);
    int i=0;
    while(i!=4)
    {
        cout<<v[i]<<" ";
        i++;
    }
    vector<int>v2(v);//copy v vector to v2 vector.
    i=0;
    cout<<endl;
    while(i!=4)
    {
        cout<<v[i]<<" ";
        i++;
    }
    int arr[5]={10,20,30,40,50};//copy array to vector
    vector<int>v3(arr,arr+5);//parameter will be array first and last index.
    i=0;
    cout<<endl;
    while(i!=5)
    {
        cout<<v3[i]<<" ";
        i++;
    }
    vector<int>v4={10,20,30,40,50};
    cout<<endl<<v4.size();
    return 0;
}
