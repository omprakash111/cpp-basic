#include<iostream>
using namespace std;
//not overriding

class Base 
{
	public:
		virtual void display()
		{
			cout<<" Display  of Base "<<endl;
			
		}
};

class Derived:public Base
{
	public:
		void display()
		{
			cout<<" Display  of Derived "<<endl;
			
		}
};


int main()
{
	Derived d;
	
	Base *p=&d;
	p->display();// Display  of Derived
}
