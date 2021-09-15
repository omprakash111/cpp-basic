#include<iostream>
using namespace std;

class Demo
{
	public:
		Demo()
		{
			cout<<"constructor"<<endl;
		}
		~Demo()
		{
			cout<<"Destructor"<<endl;
		}
};

void fun()
{
	Demo *p=new Demo();
	delete p;
	cout<<"haha"<<endl;
}

int main()
{
	fun();
	cout<<"enter"<<endl;
}
/*
constructor
Destructor
haha
enter
*/
