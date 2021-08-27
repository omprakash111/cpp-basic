#include<iostream>

using namespace std; 
void fun()
{
	cout<<"Hello";
}

int main()
{
	void (*fp)();//function pointer declaration
	fp=fun;//fuction pointer inilization
	
	(*fp)();//call fuction throught pointer
	cout<<fp;//1
	
	
	
	return 0;
}
