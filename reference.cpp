#include<iostream>
using namespace std;
//reference is another name of variable and it not occupied memory
int main()
{
	int x=34;
	int &y=x;
	cout<<"x ="<<x<<endl;
	cout<<"y ="<<y<<endl;
	cout<<"&x ="<<&x<<endl;
	cout<<"&y ="<<&y<<endl;
	return 0;
}


