#include<iostream>
#include<string>
using namespace std;

class MyException
{
	public:
		MyException()
		{
			cout<<"a";
		}
};

class ex:public MyException
{
	public:
		ex()
		{
			cout<<"b";
		}
};
int fun(int x,int y)
{  if(y!=0)
	return x/y;
	throw ex();//constructor
}

int main()
{
	int a,x=21,y=0;
	try
	{
	
	a=fun(x,y);
	cout<<a;
     }
     
     catch(MyException e)
     {
     	cout<<"Division by zero";//aDivision by zero
     	
	 }
	 catch(ex e)
     {
     	cout<<"Division by zeros";//aDivision by zero
     	
	 }
	 
}
