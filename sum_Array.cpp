#include<iostream>

using namespace std;


int main()
{
	int A[7]={4,5,3,8,3,9,2};
	int sum=0;
	
	
	for(int i=0;i<7;i++)
	sum=sum+A[i];
	
	cout<<"sum is "<<sum;
	
	return 0;
	
}
