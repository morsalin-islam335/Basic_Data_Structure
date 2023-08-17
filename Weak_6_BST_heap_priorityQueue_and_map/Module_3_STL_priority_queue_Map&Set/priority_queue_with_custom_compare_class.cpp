//program to  create curstom compare clas for priority queue
#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int roll, mark;
        Student(string name, int roll, int mark)
        {
            this -> name = name;
            this -> roll = roll;
            this -> mark = mark;
        }
};
class Compare{
    public:
        bool operator()(Student a, Student b)
        {
            if(a.mark < b.mark)
            {
                return true;
            }
            else if(a.mark > b.mark)
            {
                return false;
            }
            else 
            {
                if(a.roll > b.roll)
                {
                    return true;
                }
                else return false;
            }
        }
};
int main()
{   
    priority_queue<Student,vector<Student>,Compare>pq;
    int n; cin>>n;
    for(int i = 0; i<n; i++)
    {
        string name; int roll, mark;
        cin>>name>>roll>>mark;
        Student *st = new Student(name, roll,mark);
        pq.push(*st);
    }
    while(!pq.empty())
    {
        cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().mark<<endl;
        pq.pop();
    }
    return 0;
}