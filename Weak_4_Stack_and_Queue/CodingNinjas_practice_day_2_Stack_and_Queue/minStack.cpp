//program to find out minimum value from stack
//problem link:  https://www.codingninjas.com/studio/problems/min-stack_3843991


#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	// Write your code here.
	
	public:
		
		// Constructor
		minStack() 
		{ 
			// Write your code here.
		}
		
		stack<int>stk,mn;

		void push(int num)
		{
			stk.push(num);
			if(mn.empty())mn.push(num);
			else mn.push(min(mn.top(),num));

		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			if(stk.empty())return -1;
			int x = stk.top();
			stk.pop();
			mn.pop();
			return x;
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			if(stk.empty())return -1;
			return stk.top();
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			if(mn.empty())return -1;
			return mn.top();
		}
};