#include<iostream>

using namespace std;

class complex
{
  private:
  int real;
  int img;
  
  
  public:
  	complex (int r=0,int i=0)
  	{
  		real=r;
  		img=i;
	  }
  
   
   friend complex operator+(complex c1,complex c2);
  
   int getReal()
   {
   	return real;
   }
   
   int getImg()
   {
   	return img;
   }
	
};
 complex operator+(complex c1,complex c2)
  {
  	complex temp;
  	temp.real=c1.real+c2.real;
  	temp.img=c1.img+c2.img;
  	
  	return temp;
   }

int main()
{
	complex c1(3,7);
	complex c2(4,8);
	
	complex c3;

	
	c3=c1+c2;
	
	
	cout<<c3.getReal()<<" + "<<c3.getImg()<<" i "<<endl;//7+15 i
	
}
