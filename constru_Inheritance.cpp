#include<iostream>

using namespace std;

class Base
{
	public:
		Base()
		{
			cout<<"Default of Basic"<<endl;
		}
		Base(int x)
		{
			cout<<"param of Basic "<<x<<endl;
		}
};

class Derived:public Base
{
	public:
	Derived()
		{
			cout<<"Default of Derived"<<endl;
		}
	
	Derived(int y)
		{
			cout<<"para of Derived "<<y<<endl;
		}
		
		
	Derived(int x,int y):Base(x)
	{
		cout<<"para of Derived "<<y<<endl;
	}
};



int main()
{
	Derived d;
	//Default of Basic
	//Default of Derived
	
	Derived d1(10);
	//Default of Basic
	//para of Derived 10
	
	Derived d2(12,15);
	//param of Basic 12
	//para of Derived 15
	
	
}
