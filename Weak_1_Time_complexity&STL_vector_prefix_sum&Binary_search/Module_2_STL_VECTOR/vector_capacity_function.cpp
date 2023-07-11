//program for access vector capacity function
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={10,20,30,40};
    cout<<v.size();
    cout<<endl<<v.max_size();
    cout<<endl<<v.capacity()<<endl;
    v.push_back(12);//now capacity will 8.
    cout<<v.capacity()<<endl;
    v.resize(3);//now vector size will be 3
    cout<<v.size()<<endl;
    v.clear();//clearing vector
    cout<<v.size()<<endl;
    cout<<v[2]<<endl;//though i clear this vector, i can see this element by using index
    v[2]=5;
    cout<<v[2]<<endl;
    cout<<v.empty();//it will return true;
    return 0;
}