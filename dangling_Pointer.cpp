#include<iostream>
using namespace std;
void fun(int *q);
int main()
{
	int *p=new int[5];  //Array in heap memory and heap memory only acess throught pointer only
	cout<<"Enter the 5 value"<<endl;
	cin>>*p>>*(p+1)>>*(p+2)>>*(p+3)>>*(p+4);
	
	
	fun(p);
	
	cout<<*p;//now p is dangling pointer that p is pointing on the location which is no more belonging
	return 0;
}

void fun(int *q)
{
	cout<<endl<<*q<<endl<<*(q+1)<<endl<<*(q+2)<<endl<<*(q+3)<<endl<<*(q+4)<<endl;
	
	delete []q;
}

