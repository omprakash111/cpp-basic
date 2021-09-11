#include<iostream>
using namespace std;

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
	
	
	Base b;
	b.display();//Display  of Base
	
	Derived d;
	d.display();//Display  of Derived
}
