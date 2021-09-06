#include<iostream>

using namespace std;
class rectangle
{
	private:
		int length,breadth;
	
	public:
		rectangle();
		rectangle(int l,int b);
		rectangle(rectangle &r);
		
		void setlength(int l);
		void setbreadth(int b);
		
		int getlength(){	return length;}
		int getbreadth(){ return breadth;}
		
		int area();
		int perimeter();
		
		bool isSquare();
		~rectangle();
		

	
	

};

int main()
{
	 //rectangle r;//default constructor is created by machine and get data member value is garbage but if we declare any user constructor then that constructor run
    //cout<<r.area();
    
    
	rectangle r1; //when constructor not defined by user  then by default constructor object of data member value is garbage but now it is non-parameterized costructor are not take any parameter and set value in constructor length and breadth is 1 
	
    cout<<"Area of rectangle (non -parameterized constructor) "<<r1.area()<<endl;//1 value
    
    
	rectangle r2(7,8);
	cout<<"Area of rectangle (parameterized constructor) "<<r2.area()<<endl;//56
	
	rectangle r3(r2);
	cout<<"Area of rectangle (copy constructor ) "<<r3.area()<<endl;//56
	
	if(r2.isSquare())
	cout<<"yes it is square"<<endl;
	else 
	cout<<"No it is not square"<<endl;
	
	return 0;
}

//constructor
rectangle::rectangle()    
{
	length=1;
		breadth=1;
}

rectangle::rectangle(int l,int b)
{
	setlength(l);;
	setbreadth(b);
	
}


rectangle::rectangle(rectangle &r)
{
	length=r.length;
	breadth=r.breadth;
}




//mutators

void rectangle::setlength(int l)
{
	if(l>0)
		length=l;
	else 
		length=0;
		
	
}

void rectangle::setbreadth(int b)
{
	
	if(b>0)
		breadth=b;
	else 
		breadth=0;
}

//facilitators

int rectangle:: area()
{
		return length*breadth;
}
int rectangle::perimeter()
{
		return 2*(length+breadth);
}

//inspector
bool rectangle::isSquare()
{
	return length==breadth;
}


//destructor
rectangle::~rectangle()
{
	
	cout<<"Rectangle destroy"<<endl;
}

