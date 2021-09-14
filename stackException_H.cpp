#include<iostream>

using namespace std;

class StackOverFlow:public exception{};
class StackUnderFlow:public exception{};

class Stack
{
	private:
		int *stk;
		int top;
		int size;
	public:
		Stack(int sz)
		{
			size=sz;
			stk=new int[size];
			top=-1;
		}
		
		void push(int x)
		{
			if(top==size-1)
			    throw StackOverFlow();
			    
			top++;
			stk[top]=x;
		}
		int pop()
		{
			if(top==-1)
			throw StackUnderFlow();
			return stk[top--];
		}
		
		void Display();
		
};
void Stack::Display()
{
	for(int i=0;i<=top;i++)
	   cout<<stk[i]<<endl;
	 
}


int main()
{   char Y;
	int num;
	Stack s(5);
	
	
	
	
	try{
	
	
	
	do
	{
		cout<<"Input Number "<<endl;
		cin>>num;
		s.push(num);
		cout<<"Do you want to enter number y/n "<<endl;
		cin>>Y;
	}while(Y=='y');
	
   }
   catch(StackOverFlow over)
   {
   	cout<<"StackOverFlow"<<endl;
   }
	
	
	s.Display();
	
	
	
	try{
	
	     cout<<"Do you want to pop y/n "<<endl;
	     cin>>Y;
         while(Y=='y')
	     {
	
		     s.pop();
		     cout<<"Do you want to pop y/n "<<endl;
		     cin>>Y;
	      }
	
        }
   catch(StackUnderFlow under)
   {
   	cout<<"StackUnderFlow"<<endl;
   }
   s.Display();
}
