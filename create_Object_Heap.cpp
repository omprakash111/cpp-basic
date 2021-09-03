#include<iostream>

using namespace std;

class Rectangle
{
	public :
		int l;
		int b;
	int area()
	{
		return l*b;
	}
	int perimeter()
	{
		return 2*(l+b);
	}
};

int main()
{
	Rectangle *p;
	
	p=new Rectangle;
	p->l=19;
	p->b=10;
	cout<<p->area()<<endl<<p->perimeter();
	
	return 0;
	
}
