#include<iostream>
using namespace std;

typedef int marks;      //userdefined datatype
int main()
{
	marks m1,m2,m3,total;
	float avg;
	
	cout<<"Enter marks of 3 students \n";
	cin>>m1>>m2>>m3;
	total=m1+m2+m3;
	avg=total/3.0;
	
	if(avg>=60)
	 cout<<"A \n";
	else if(avg>=35 && avg<60)
	 cout<<"B";
	else
	 cout<<"c";
	return 0;
	
	
}
