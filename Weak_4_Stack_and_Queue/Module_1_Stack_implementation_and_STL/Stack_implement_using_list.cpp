//program to implement stack by using list
#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
        list<int>v;
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
        int x;cin>>x;st.push(x);
    }
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    st.pop();
    cout<<st.top();//this will print gerbage value;
    st.push(60);
    cout<<endl<<st.top();
    return  0;
}