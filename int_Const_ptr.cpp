#include<iostream>
using namespace std;

int main()
{
	int x=10,y=13;
	 int * const ptr=&x;//pointer constant not data
	*ptr=34;
	//ptr=&y;[Error] assignment of read-only variable 'ptr'
	cout<<*ptr;//34
}
