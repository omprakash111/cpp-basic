#include<iostream>
#define CASE 3 

using namespace std;
int fun(int n);

int main()
{
	int i,n,fact;
	cout<<"Enter the number for factorial"<<endl;
	cin>>n;
	
	#if CASE ==1
	for(i=1,fact=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"Factorial of "<<n<<" = "<<fact<<endl;
	
	
	#elif CASE==2
	for(i=n,fact=1;i>=1;i--)
	{
		fact=fact*i;
	}
	cout<<"Factorial of "<<n<<" = "<<fact<<endl;
	
	#elif CASE==3
	 fact=fun(n);
	 
	 cout<<"Factorial of "<<n<<" = "<<fact<<endl;
	
	#endif
	return 0;
}

int fun(int n)
{
	int fact=1;
	if(n<=1)
	return 1;              //recursion 
	
	else
     {
	 
	 fact=n*fun(n-1);
	 
	 return fact;
     }
	
}
