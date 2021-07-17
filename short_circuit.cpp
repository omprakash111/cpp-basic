#include<iostream>
using namespace std;

int main()
{
	//concept of short circuit
	int a,b,i=5;
	cout<<"Enter the value of a,b"<<endl;
	cin>>a>>b;
	cout<<"a = "<<a<<" b = "<<b<<" i = "<<i <<endl;
	
	if(a>b && a>++i) /* Case I if a=3 and b=2 then first condition get true then check second condition and i increm and check condition but
	                   in case II  if a=3 and b=5 then first condition get false then not check second condition and i not increm  that is called short circuit*/
	
	
	{
	}
	cout<< "And logical "<<" a = "<<a<<" b = "<<b<<" i = "<<i <<endl;
	
	
	
		if(a>b || a>++i) /* Case I if a=3 and b=2 then first condition get true then not check second condition and i not increm but
	                   in case II  if a=3 and b=5 then first condition get false then check second condition and i increm and check condition that is called short circuit*/
	
	
	{
	}
	cout<<"OR logical "<<"a = "<<a<<" b = "<<b<<" i = "<<i <<endl;
	
	return 0;
}
