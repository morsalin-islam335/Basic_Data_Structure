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
    st.push(10);
    st.push(10);
    st.push(10);
    // for(int i=0;i<st.v.size();i++)
    // {
    //     cout<<st.v[i]<<" ";
    // }
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
        cout<<endl;
    }
    return 0;
}