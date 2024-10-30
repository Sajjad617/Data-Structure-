#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	// Write your code here.
	
	public:
		stack<int> main;
		stack<int> min;
		// Constructor
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			if(main.empty()){
				main.push(num);
				min.push(num);
			}
			else{
				main.push(num);
				if(num <= min.top()){
					min.push(num);
				}
			}
			// Write your code here.
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			if(main.empty()) return -1;
			int m = main.top();

			if(main.top() == min.top()){
				main.pop();
				min.pop();
			}
			else{
				main.pop();
			}
			return m;
			// Write your code here.
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			if(main.empty()) return -1;
			// int v = main.top();
			
			// return v;
			return main.top();
			
		
			// Write your code here.
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			if(main.empty()) return -1;
			return min.top();
			// Write your code here.
		}
};