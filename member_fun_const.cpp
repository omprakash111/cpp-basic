#include<iostream>
using namespace std;

class Demo
{
	public:
		int x=10;
		int y=20;
		
		void Display()const
		{
			//x++;[Error] increment of member 'Demo::x' in read-only object
			cout<<x<<" "<<y<<endl;
		}
};
int main()
{
	int x=10,y=13;
	Demo d;
	d.Display();
	
}
