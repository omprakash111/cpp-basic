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
	Demo d;
	cout<<"enter"<<endl;
}

int main()
{
	fun();
}
/*
constructor
enter
Destructor

*/
