/* C++ program to implement basic stack
operations */
#include <bits/stdc++.h>

using namespace std;

#define MAX 5

class Stack {
	int top;

public:
	int a[MAX]; // Maximum size of Stack

	Stack() { top = -1; }
	bool push(int x);
	int pop();
	int peek();
	bool isEmpty();
	void disp();
};

bool Stack::push(int x)
{
	if (top >= (MAX - 1)) {
		cout << "Stack Overflow";
		return false;
	}
	else {
		a[++top] = x;
		cout << x << " pushed into stack\n";
		return true;
	}
}

int Stack::pop()
{
	if (top < 0) {
		cout << "Stack Underflow";
		return 0;
	}
	else {
		int x = a[top--];
		return x;
	}
}
int Stack::peek()
{
	if (top < 0) {
		cout << "Stack is Empty";
		return 0;
	}
	else {
		int x = a[top];
		return x;
	}
}

bool Stack::isEmpty()
{
	return (top < 0);
}
void Stack::disp()
{
	int i;
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<endl;
	}
}

int main()
{
	class Stack s;
	int option,val;
	cout<<"1.Push"<<endl;
	cout<<"2.display"<<endl;
	cin>>option;
	switch(option)
	{
		case 1:
		if(s.isEmpty())
		{
			cout<<"enter the value"<<endl;
			cin>>val;
			s.push(val);
			
			}
		case 2:
		s.disp();		
	}
	return 0;
}

