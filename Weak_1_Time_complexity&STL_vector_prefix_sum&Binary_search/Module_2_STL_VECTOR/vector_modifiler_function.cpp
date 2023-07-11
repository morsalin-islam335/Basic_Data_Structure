//program for access vector modifier function
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v={10,20,30};//assigning value
    for(int val:v)
    {
        cout<<val<<" ";
    }
    v.assign({50,60,70});//assign with assign function
    cout<<endl;
    for(int val:v)
    {
        cout<<val<<" ";
    }
    v.push_back(89);//add 89 in  last  index
    cout<<endl;
    for(int val:v)
    {
        cout<<val<<" ";
    }
    v.pop_back();//it will remove last index
    cout<<endl<<v[v.size()-1];

    v.insert(v.begin()+v.size()-1,100);//insert a single value.
    cout<<endl;
    for(int val:v)
    {
        cout<<val<<" ";
    }

    //insert array
    int arr[3]={-100,-200,-300};
    v.insert(v.end(),arr,arr+2);//insert arr array 2 element;
    cout<<endl;
    for(int val:v)
    {
        cout<<val<<" ";
    }

    //insert another vector
    vector<int>v2={11,22,33};
    v.insert(v.end(),v2.begin(),v2.end());
    cout<<endl;
    for(int val:v)
    {
        cout<<val<<" ";
    }

    //ereasing vector
    v.erase(v.end()-1);//it will erase last index.
    cout<<endl<<v[v.size()-1]<<endl;

    //erasing first 3 element
    v.erase(v.begin(),v.begin()+3);
    for(int val:v)
    {
        cout<<val<<" ";
    }
    
    //replace last 3 element
    replace(v.end()-3,v.end(),11,12);//if last 3 index 11, it will replace by 12
    cout<<endl;
    for(int val:v)
    {
        cout<<val<<" ";
    }

    //find function is work for access iterator
    //find function
    auto it=find(v.begin(),v.end(),12);
    if(it!=v.end())
    {
        cout<<endl<<"found";
    }
    else
    {
        cout<<endl<<"Not found";
    }
    vector<int>v3;
    v3.assign(v.begin(),v.end());
    cout<<endl;
    for(int val:v3)
    {
        cout<<val<<" ";
    }
    return 0;
} 