#include<iostream>
using namespace std;

int main()
{
	
	int num;
	cout<<"Enter the day number"<<endl;
	cin>>num;
	
	//using ladder if
	if(num==1)
	cout<<"Monday";
	else if(num==2)
	cout<<"Tuesday";
	else if(num==3)
	cout<<"Wednesday";
	else if(num==4)
	cout<<"Thrusday";
	else if(num==5)
	cout<<"Friday";
	else if(num==6)
	cout<<"Saturday";
	else if(num==7)
	cout<<"Sunday";
	else
	cout <<"Invaid number for day names";
	return 0;
}
