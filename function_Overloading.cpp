#include<iostream>
//we have more than one function with the same name but a diiferent argument list is called function overloading.
int add(int x,int y)
{
	return x+y;
}


int add(int x,int y,int z)
{
	return x+y+z;
}

float add(float x,float y)
{
	
	return x+y;
}
/*
ambiguating new declaration orreturn type is never considered in  function overloading if the function names and argument
are exactly same but their return type is different mean they are not overloaded. It's a name conflict.
int add(float x,float y)
{
	
	return x+y+10;
}
*/

using namespace std;

int main()
{ int a=10,b=7,c,d;
  
  c=add(a,b);
  cout<<"sum of "<<a<<" , "<<b<<" = "<<c<<endl;
  d=add(a,b,c);
  cout<<"sum of "<<a<<" , "<<b<<" , "<<c<<" = "<<d<<endl;
  
  float x=3.5f,y=6.8,z;
  z=add(x,y);
  cout<<"sum of "<<x<<" , "<<y<<" = "<<z<<endl;
  
	
	
	
	
	return 0;
}

