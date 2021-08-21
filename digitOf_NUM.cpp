#include<iostream>

using namespace std;

int main()
{
	int num,r;
	cout<<"Enter the naumber \n";
	cin>>num;
	while(num>0)
	{
		r=num%10;
		num=num/10;
		cout<<r<<endl;
	}
	return 0;
}
