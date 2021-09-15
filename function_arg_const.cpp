#include<iostream>
using namespace std;

void fun(const int &a,int &b)
{
	//a++;[Error] increment of read-only parameter 'a'
	b++;
	
	cout<<a<<" "<<b<<endl;
}
int main()
{
	int x=10,y=13;
	fun(x,y);
	cout<<x<<" "<<y<<endl;
}
