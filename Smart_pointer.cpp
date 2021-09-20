#include<iostream>

using namespace std;


class Rectangle
{
	int length;
	int breadth;

public:
	Rectangle(int l, int b)
	{
		length = l;
		breadth = b;
	}
	int area()
	{
		return length * breadth;
	}
};
int main()
{
	unique_ptr<Rectangle> p1(new Rectangle(10, 5));
	cout << p1->area();//50

	unique_ptr<Rectangle> p2;
	//p2 = p1; not allowed because deallocate p1 and point p2 is pointer
	p2 = move(p1);
	cout << p2->area()<<endl;//50




	shared_ptr<Rectangle> p3(new Rectangle(10, 6));
	cout << p3->area()<<endl;//60

	shared_ptr<Rectangle> p4;
	
	p4 = p3;
	cout << p4->area()<<endl;//60
	cout <<"Number of object point" <<p3.use_count();//2
	

}
