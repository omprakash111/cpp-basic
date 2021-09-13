#include<iostream>
using namespace std;

class outer
{

 public:
 	int a;
 	static int b;
	
	void fun()
	{
		i.show();
		cout<<i.x<<endl;
	}
	
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
				cout<<b<<endl;
			}
			
			
	};
	Inner i;
};

int outer::b;

int main()
{
	outer ot;
	ot.fun();/* show inner
	            0
	            65     */
	 
}
