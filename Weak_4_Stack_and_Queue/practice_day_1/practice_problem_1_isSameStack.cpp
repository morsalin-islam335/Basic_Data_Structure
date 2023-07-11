//program to check if two stack are same or not without STL
#include<bits/stdc++.h>
using namespace std;
class MyStack{
    public:
     list<int>myList;
     void push(int val)   
     {
        myList.push_back(val);
     }
     void pop()
     {
        myList.pop_back();
     }

     bool empty()
     {
        return myList.empty();
     }
     int top()
     {
        return myList.front();
     }

};
bool isSame()
{
   MyStack a,b; 
   int x; cin>>x;
   int val;
   for(int i=0;i<x;i++)
   {    cin>>val;
        a.push(val);
   }
   int y; cin>>y;
   for(int i=0;i<y;i++)
   {
        cin>>val;
        b.push(val);
   }
   if(x!=y)return false;
   else
   {
       while(!a.empty())
       {
            if(a.top()!=b.top())return false;
            a.pop();
            b.pop();
       }
       return true;
   }
   return true;//it will not exicute
}
int main()
{   (isSame()!=false)?cout<<"YES":cout<<"NO";
    return 0;
}