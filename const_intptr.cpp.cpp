#include<iostream>
using namespace std;

int main()
{
	int x=10,y=13;
	const int *ptr=&x;//int const *ptr=&x;
	//*ptr=34;[Error] assignment of read-only location '* ptr'
	ptr=&y;//but pointer is point other variable address
	cout<<*ptr;
}
