#include<iostream>

using namespace std;
int add(int x,int y=0,int z=0) //z=0 is work only when third argument not pass otherwise z is assign value by argument .And benefit in combine overloaded function
{
	return x+y+z;
}


int main()
{
	int c=add(4);            /* x=4,y=0,z=0  there are one argument but function defined is three argument then funtion define value by 
	                         default argument value use so that overloaded function  in single function  call function */
	cout<<"add 4 = "<<c<<endl;
	 c=add(4,7);                  //x=4,y=7,z=0
	cout<<"add 4,7 = "<<c<<endl;
	c=add(4,7,8);                    //x=4,y=7,z=8
	cout<<"add 4,7,8 = "<<c<<endl;
	
	c=add(4,7,0);                     //x=4,xy=7,z=0
	cout<<"add 4,7,0 = "<<c<<endl;
	return 0;
}
