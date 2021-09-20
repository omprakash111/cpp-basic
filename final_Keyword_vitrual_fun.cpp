#include<iostream>

class Base 
{
	public:
		virtual void fun() final
		{
			
		}
};
class Derived:public Base
{
	public:
	void fun() //[Error] overriding final function 'virtual void Base::fun()'
	{
		
	}
};


int main()
{
}
