#include<iostream>

using namespace std;

int main()
{
	int num,i,sum=0;
	cout <<"Enter the number for sum first natural number"<<endl;
	cin>>num;
	
	for(i=1;i<=num;i++)
	{
		sum=sum+i;
		
	}
	cout<<"sum of first natural number till "<<num<<" = "<<sum<<endl;
	
	
	
	return 0;
}
