#include<iostream>

using namespace std;

int fun(int x,int y)
{  if(y!=0)
	return x/y;
	throw 1;
}

int main()
{
	int a,x=21,y=0;
	try
	{
	
	a=fun(x,y);
	cout<<a;
     }
     catch(int e)
     {
     	cout<<"Division by zero"<<e;
     	cout<<"value in a is"<<a;//garbage
	 }
}
