#include<iostream>

using namespace std;
class rectangle
{
	public:
		int length,breadth;
		
	int area()
	{
		return length*breadth;
	}
	int perimeter()
	{
		return 2*(length+breadth);
	}
};

int main()
{
	rectangle r1,r2;
	r1.length=10;
	r1.breadth=4;
	
	cout<<"Area of length "<<r1.length <<" and breadth "<<r1.breadth<<" is reactangle "<<r1.area()<<endl<<"Perimeter is rectangle "<<r1.perimeter()<<endl;
	cout<<"Enter the length and breadth "<<endl;
	cin>>r2.length>>r2.breadth;
	
	cout<<"Area is reactangle "<<r1.area()<<endl<<"Perimeter is rectangle "<<r1.perimeter();
	
	return 0;
}

