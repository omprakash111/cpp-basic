#include<iostream>


using namespace std;


template<class T>
class Stack
{
	private:
		T *stk;
		int top;
		int size;
	public:
		Stack(int sz)
		{
			size=sz;
			stk=new T[size];
			top=-1;
		}
		
		
		void push(T x);
		T pop();
		void Display();
		
};
template<class T>
void Stack<T>::push(T x)
		{
			if(top==size-1)
			    cout<<"Stack is Full";
			
			else
			{
			 
			top++;
			stk[top]=x;
		      } 
		}
		
		
template<class T>		
T Stack<T>::pop()
		{
			if(top==-1)
			cout<<"Stack is Empty";
			else
			return stk[top--];
		}
		
template<class T>		
void Stack<T>::Display()
{
	for(int i=0;i<=top;i++)
	   cout<<stk[i]<<endl;
	 
}

int main()
{
	Stack<int> s(10);
	s.push(12);
	s.push(43);
	s.Display();
	s.pop();
	s.Display();
}
 
