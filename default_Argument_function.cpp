#include<iostream>

using namespace std;
int add(int x,int y,int z=0) //z=0 is work only when third argument not pass otherwise z is assign value by argument .And benefit in combine overloaded function
{
	return x+y+z;
}


int main()
{
	int c=add(4,7);
	cout<<"add 4,7 = "<<c<<endl;
	c=add(4,7,8);
	cout<<"add 4,7,8 = "<<c<<endl;
	
	c=add(4,7,0);
	cout<<"add 4,7,0 = "<<c<<endl;
	return 0;
}
