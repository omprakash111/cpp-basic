#include<iostream>

using namespace std;
class rectangle
{
	private:
		int length,breadth;
		
	public:	
	void setLength(int l)
	{
		if(l>0)
		length =l;
		else
		length=0;
	}
		void setBreadth(int b)
	{
		if(b>0)
		breadth =b;
		else
		breadth=0;
	}
		int getLength()
	{
		return length;
	}
	
		int getBreadth()
	{
		return breadth;
	}
	
	
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
	rectangle r1;
    int l,b;
    cout<<"Enter length and breadth"<<endl;
    cin>>l>>b;
    r1.setLength(l);
    r1.setBreadth(b);
	
	cout<<"Area of length "<<r1.getLength() <<" and breadth "<<r1.getBreadth()<<" is reactangle "<<r1.area()<<endl<<"Perimeter is rectangle "<<r1.perimeter()<<endl;
	
	
	return 0;
}

