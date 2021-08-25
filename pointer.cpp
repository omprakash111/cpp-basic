#include<iostream>

using namespace std;

int main()
{
	int a=8;
	int *p=&a;
	
	cout<<a<<endl; //8
	cout<<&a<<endl;// 0x23fe9c
	cout<<p<<endl;//0x23fe9c
	cout<<&p<<endl;//0x23fe98
	cout<<*p<<endl;//8
	
}
