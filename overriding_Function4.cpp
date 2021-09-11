#include<iostream>
using namespace std;
// overriding

class Base 
{
	public:
		virtual void display()=0;
		
		virtual void play()=0;
		
};

class Derived:public Base
{
	public:
		void display()
		{
			cout<<" Display  of Derived "<<endl;
			
		}
		void play()
		{
			cout<<" play  of Derived "<<endl;
			
		}
};


int main()
{
	Derived d;
	//Base j;    33	7	D:\c++\overriding_Function4.cpp	[Error] cannot declare variable 'j' to be of abstract type 'Base'
	
	
	Base *p=&d;
	p->play();// Display  of Derived
	
}
