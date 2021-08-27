#include<iostream>
//In function overwriting internally. Same name of fuction pointer is point diffent function diffent operation so this is juast like polymorphism.
using namespace std; 
void fun()
{
	cout<<"Hello"<<endl;
}

void kali()
{
	cout<<"kali";
}

int main()
{
	void (*fp)();//function pointer declaration
	fp=fun;//fuction pointer inilization
	
	(*fp)();//call fuction throught pointer
	
	fp=kali;
	
	(*fp)();
	
	
	
	return 0;
}
