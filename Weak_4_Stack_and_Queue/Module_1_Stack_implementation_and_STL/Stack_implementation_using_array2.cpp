//program to  implementation by using array
#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
        vector<int>v;
        void push(int val)
        {
            v.push_back(val);
        }

        void pop()
        {
            v.pop_back();
        }
        int top()
        {
            return v.back();
        }

        bool empty()
        {
            if(v.size()==0)return true;
            else return false;  
        }
        int size()
        {
            return v.size();
        }
};

int main()
{
    myStack st;
    int n;cin>>n;
    while(n--)
    {
        int  x;cin>>x;
        st.push(x);
    }
    //printing
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
     
    return 0;
}