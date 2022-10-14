#include<iostream>
using namespace std;
#define max 50
#define null 0
class Stack
{
	private: 
			int arr[max];
			int top;
	public:
			Stack();
			void push(int);
			int pop();
			~Stack();
};

Stack::Stack()
{
	top = -1;
	cout<<"Inside the consructor function\n";
}

void Stack::push(int num)
{
	if(top == max-1)
	{	
		cout<<"The stack is full\n";
		return;
	}
	top++;
	arr[top] = num;
}

int Stack::pop()
{
	if(top == -1)
	{
		cout<<"The stack is empty\n";
		return null;
	}
	int x = arr[top];
	arr[top] = 0;
	top--;
	return x;
}

Stack::~Stack()
{
	cout<<"Inside destructor function\n";
}

int main()
{
	Stack s;
	int num = 0,choice = 0;
	while(1)
	{
		cout<<"Enter the choice\n";
		cout<<"1 for push\n";
		cout<<"2 for pop\n";
		cout<<"3 for exit\n";
		cin>>choice;
		
		switch(choice)
		{
			case 1:cout<<"Enter the number\n";
					cin>>num;
					s.push(num);
					break;
			case 2:num = s.pop();
					cout<<"The poped data is "<<num<<endl;
					break;
			case 3:cout<<"Exiting....\n";
					exit(0);
			default : cout<<"Invalid choice..Try again...!!\n";
}
}
}
