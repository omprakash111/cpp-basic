#include<iostream>
using namespace std;
// overriding

class Base 
{
	public:
	void display()
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
	d.display();
}
