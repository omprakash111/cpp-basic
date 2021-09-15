#include<iostream>
using namespace std;

int main()
{
	int x=10,y=13;
	const int * const ptr=&x;//pointer constant not data
	//*ptr=34;[Error] assignment of read-only location '*(const int*)ptr'
	//ptr=&y;[Error] assignment of read-only variable 'ptr'
	cout<<*ptr;//10
}
