#include<iostream>
using namespace std;

class test
{
	public:
		static int c;
          static void show(void);
};
int test::c=0;
	 void test::show(void)
  { 
	c++;
	cout<<c;
  }

int main()
{
	test::show();
	
}
