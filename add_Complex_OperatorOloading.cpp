#include<iostream>
#define CASE 2 
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
  #if CASE ==1
  complex add(complex x)
  {
  	complex temp;
  	temp.real=real+x.real;
  	temp.img=img+x.img;
  	
  	return temp;
   }
   #elif CASE==2
   complex operator+(complex x)
  {
  	complex temp;
  	temp.real=real+x.real;
  	temp.img=img+x.img;
  	
  	return temp;
   }
   #endif
   int getReal()
   {
   	return real;
   }
   
   int getImg()
   {
   	return img;
   }
	
};


int main()
{
	complex c1(3,7);
	complex c2(4,8);
	
	complex c3;
	#if CASE ==1
	c3=c1.add(c2);
	#elif CASE==2
	c3=c1+c2;//it is wrong c1.oprator+(c2)
	#endif
	
	cout<<c3.getReal()<<" + "<<c3.getImg()<<" i "<<endl;//7+15 i
	
}
