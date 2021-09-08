#include<iostream>

using namespace std;

class base
{
	public:
		int a;
		void display()
		{
			cout<<"Display of base"<<endl;
		}
		
};

class derive:public base
{
	public:
	int b;
		void show()
		{
			cout<<"Display of derive"<<endl;
		}
		
};


int main()
{
	derive d;
	d.a=12;
	d.b=3;
	cout<<d.a<<" "<<d.b<<endl;
	
	d.display();
	d.show();
	
	
}

