#include<iostream>
#define CASE 1 

using namespace std;

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
	for(i=n,fact=1;i>=n;i--)
	{
		fact=fact*i;
	}
	cout<<"Factorial of "<<n<<" = "<<fact<<endl;
	
	#endif
	return 0;
}
