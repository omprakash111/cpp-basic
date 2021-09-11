#include<iostream>
using namespace std;

class Base
{
public:
	void fun1()
	{
		cout << "fun1 of Base " << endl;
	}
};

class Derived:public Base
{
public:
	void fun2()
	{
		cout << "fun2 Derived " << endl;
	}
};

int main()
{
	//Derived *ptr;
	//ptr=new base(); // pointer of derived class are not all member in base 

	
	Base *p = new Derived();
	p->fun1();//fun1 of Base 

	return 0;
}
