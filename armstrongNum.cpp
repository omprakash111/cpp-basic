#include<iostream>

using namespace std;
/*  sum of cube of digit of a number .if they are equaltothe number is called Arnstrong number */  
int main()
{
	int num,originNum,sum=0,r;
	cout<<"Enter the Number for checking Armstrong num"<<endl;
	cin>>num;
	
	originNum=num;
	
	while(num>0)
	{
		r=num%10;
		sum=sum+(r*r*r);     
		num=num/10;
		
	}
	if(sum==originNum)
    {
       cout<<originNum<< " is Armstrong number "<<endl;	
	}	
	else
	{
		cout<<originNum<< " is not Armstrong number "<<endl;	
	}
	
	return 0;
}
