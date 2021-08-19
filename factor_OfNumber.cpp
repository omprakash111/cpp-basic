#include<iostream>

using  namespace std;


int main()
{
	int num,i;
	cout<<"Enter the number for factor"<<endl;
	cin>>num;
	cout<<"Factor of "<<num <<":"<<endl;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		 cout<<i<<endl;
		 
		
	}
	return 0;
}
