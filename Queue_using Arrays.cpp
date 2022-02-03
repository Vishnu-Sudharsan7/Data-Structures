#include <bits/stdc++.h>

using namespace std;
class Queue
{
	private:
		int a[5];
		int front,rear;
	public:
		Queue()
		{
			front=-1;
			rear=-1;
			int i;
			for(i=0;i<5;i++)
			{
				a[i]=0;
			}
	}
		bool isEmpty();
		bool isFull();
		void enqueue(int x);
		int dequeue();
		void display();	
	
};
bool Queue::isEmpty()
{
	if(front==rear)
	return true;
	else
	return false;
	
}
bool Queue::isFull()
{
	if(rear>=5)
	return true;
	
}
void Queue::enqueue(int x)
{
	if(front==rear)
	{
	
	front=rear=0;
	}
	a[rear]=x;
	rear++;
	cout<<x<<"is added"<<endl;
	cout<<"Current Queue is"<<endl;
	int i;
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<endl;
	}
}
int Queue::dequeue()
{
	int val;
	val=a[front];
	a[front]=0;
	front++;
	cout<<"the current queue is"<<endl;
	int i;
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<"This value is removed:";
	return val;
}
void Queue::display()
{
	int i;
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<endl;
	}
}
int main()
{
	class Queue q;
	int option,val;
	
	
	
	x:cout<<"1.enqueue"<<endl;
	cout<<"2.dequeue"<<endl;
	cout<<"3.exit"<<endl;
	cin>>option;
	
	
	
		if(option==1)
			{
			
		if(q.isFull())
		{
			cout<<"enter the value"<<endl;
			cin>>val;
			q.enqueue(val);
			
			}goto x;
}
		if(option==2)
			{
			
		if(q.isEmpty())
		{
			cout<<"The queue is empty";
				}	
				else
				{
				q.dequeue();	
			}
			goto x;
}


	return 0;
}
