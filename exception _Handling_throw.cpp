#include<iostream>
#include<string>

using namespace std;

int fun(int x,int y)
{  if(y!=0)
	return x/y;
	throw string("throw string ");
}

int main()
{
	int a,x=21,y=0;
	try
	{
	
	a=fun(x,y);
	cout<<a;
     }
     catch(string e)
     {
     	cout<<"Division by zero"<<e;
     	
	 }
}
