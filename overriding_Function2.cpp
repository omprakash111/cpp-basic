#include<iostream>
using namespace std;
//not overriding

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
		void display(int a)
		{
			cout<<" Display  of Derived "<<a<<endl;
			
		}
};


int main()
{
	
	
	Base b;
	b.display();//Display  of Base
	
	Derived d;
	d.Base::display();//Display  of Base
	d.Derived::display(5);// Display  of Derived 5
		d.display(5);// Display  of Derived 5
}
