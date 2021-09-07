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
  /*
   void display()
   {
   	cout<<real<<"+i"<<img<<endl;
   }
	
	*/
	
	friend ostream & operator<<(ostream &o ,complex & c);
	
};

 complex operator+(complex c1,complex c2)
  {
  	complex temp;
  	temp.real=c1.real+c2.real;
  	temp.img=c1.img+c2.img;
  	
  	return temp;
   }
   
   ostream & operator<<(ostream &o ,complex & c)
   {
   	  o<<c.real<<"+i"<<c.img;
		    }

int main()
{
	complex c1(3,7);
	complex c2(4,8);
	
	complex c3;

	
	c3=c1+c2;
	
	
	cout<<c3;//7+i15 
	
}
