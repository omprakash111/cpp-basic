#include<iostream>
//One function pointer can point on any function which is having same signature.
using namespace std; 
int fun(int x,int y)
{
 return x>y?x:y;
}

int gara(int x,int y)
{
	return x<y?x:y;
}

int main()
{
	 int a;
	 int (*fp)(int,int);//function pointer declaration
	fp=fun;//fuction pointer inilization
	
	a=(*fp)(2,6);//call fuction throught pointer
	cout<<a<<endl;//6
	
	fp=gara;
	
	a=(*fp)(8,9);
	cout<<a<<endl;//8
	
	
	
	return 0;
}
