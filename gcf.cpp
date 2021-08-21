#include<iostream>

using namespace std;

int main()
{
	int num1,num2,n,m;
	cout<<"Enter the number \n";
	cin>>num1>>num2;
	n=num1;m=num2;
	
	while(num1!=num2)
	{
		if(num1>num2)
		 num1=num1-num2;
		
		
		else if(num2>num1)
		 num2=num2-num1;
		
	}
	
	cout<<"Greater common factor of "<<n<<" , "<<m<<" is "<<num1;
	
	return 0;
}
