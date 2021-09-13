#include<iostream>
using namespace std;
class Inner
	{
		public:
			int x;
			Inner()
			{
				x=65;
			}
			void show()
			{
				cout<<"show inner"<<endl;
				//cout<<a;non static member
				//cout<<b<<endl;
			}
			
			
	};

class outer
{

 public:
 	int a;
 	static int b;
		Inner i;
	void fun()
	{
		i.show();
		cout<<i.x<<endl;
	}
	
	

};
class B
{

 public:
 	int fun6()
 	{
 	  return outer::b;	
	 }
	

};


int outer::b;

int main()
{
	outer ot;
	ot.fun();/* show inner
	            0
	            65     */
	cout<<outer::b;

  B b;
  cout<<b.fun6();	 
}
