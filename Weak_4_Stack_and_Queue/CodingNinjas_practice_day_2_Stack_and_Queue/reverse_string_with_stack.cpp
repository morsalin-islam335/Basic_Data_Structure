//program to reverse string with stack
//problem link:  https://www.codingninjas.com/studio/problems/kevin-s-stack-problem_1169465

#include <bits/stdc++.h> 
string kevinStackProblem(string &s)
{
	stack<char>reverse;
	for(int i = 0; i<s.size(); i++)
	{
		reverse.push(s[i]);
	}
	s.erase(s.begin(),s.end());
	while(!reverse.empty())
	{
		s+=reverse.top();
		reverse.pop();
	}
	return s;
}
