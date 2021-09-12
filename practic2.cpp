#include<iostream>
using namespace std;
class A
{
	public:
		int a,b;
};

void fun(A p)
{
	cout<<p.a<<" "<<p.b<<endl;
	cout<<"in main function object address "<<&p<<endl;
}

int main()
{
	
	A py;
	py.a=9;
	py.b=7;
	
	fun(py);//passing object to function
	cout<<"in main function object address "<<&py;
	
}


