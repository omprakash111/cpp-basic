#include<iostream>
using namespace std;

class Test
{
	private:
		int a;
		int b;
	public:
		static int count ;//share by all object
		Test()
		{
			a=10;
			b=20;
			count++;
		}
		
		static int getcount()
		{
			count=5;
		}
		
		
};

int Test::count=0;// by default initialized zero
int main()
{
	cout<<Test::count<<endl;// 0               static member belong to class not object.
	 
	 Test t1;
	 cout<<t1.count<<endl;//1
	 Test t2;
	 cout<<t2.count<<endl;//2
	 cout<<t1.count<<endl;//2
	 
	 cout<<t1.getcount()<<endl;//garbage value because no return
	 cout<<t1.count<<endl;//now count after getcount() call it beacame 5
	 
	return 0;
}
