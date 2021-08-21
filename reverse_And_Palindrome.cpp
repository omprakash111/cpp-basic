#include<iostream>

using namespace std;

int main()
{
	int num,r,rev=0;
	int storeNum;
	cout<<"Enter the naumber \n";
	cin>>num;
	
	storeNum=num;
	while(num>0)
	{
		r=num%10;
		num=num/10;
		rev=rev*10+r;
	}
	cout<<"reverse number of "<<storeNum<<" is "<<rev<<endl;
	
	
	if(rev==storeNum)
	{
		cout<<storeNum<<" is palindrome "<<endl;  //if number of reverse is equal to original number then it is called palindrome number
	}
	return 0;
}
