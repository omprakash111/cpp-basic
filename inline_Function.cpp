#include<iostream>

using namespace std;

class rect
{
	public:
		void fun1()
		{
			cout<<"inline function1 in machine code"<<endl;
			
		}
		inline void fun2();//make inline function
		void fun3();
};
void rect::fun2()
		{
			cout<<"inline function2 in machine code"<<endl;
			
		}
void rect::fun3()
		{
			cout<<"Not-inline function3 in machine code"<<endl;
			
		}
		
int main()
{
	
	rect r;
	r.fun1();
	r.fun2();
	r.fun3();
		}		
	
