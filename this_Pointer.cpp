#include<iostream>

using namespace std;
class rectangle
{
	private:
		int length,breadth;
	
	public:
		
	rectangle() //It is same name as class name.And  constructor will not have any return type.      non-parameterized constructor
	{
		length=1;
		breadth=1;
	}
	
	rectangle(int l,int b) //It is same name as class name.And  constructor will not have any return type.      parameterized constructor
	{   if(l>0)
		this->length=l;//To avoid the name ambiguity and to make the statement more clear you can say this arrow.
		else 
		this->length=0;
		
		if(b>0)
		breadth=b;
		else 
		breadth=0;
	}
	rectangle(rectangle &rec) //                                                                                copy constructor
	{   length=rec.length;
	     breadth=rec.breadth;
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
	 
    
    
	rectangle r1; //when constructor not defined by user  then by default constructor object of data member value is garbage but now it is non-parameterized costructor are not take any parameter and set value in constructor length and breadth is 1 
	
    cout<<"non -parameterized constructor "<<r1.area()<<endl;//1 value
    
    
	rectangle r2(7,8);
	cout<<"parameterized constructor "<<r2.area()<<endl;//56
	
	rectangle r3(r2);
	cout<<"copy constructor "<<r3.area()<<endl;//56
	
	return 0;
}

