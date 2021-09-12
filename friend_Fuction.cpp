#include<iostream>
using namespace std;

class Test
{
  private:int a;
  protected :int b;
  public:int c;
  friend void fun();//friend fuction allow to access all specifer upon object
};

void fun()
{
	Test t;
	t.a=19;
	t.b=34;
	t.c=56;
	cout<<t.a<<" "<<t.b<<" "<<t.c<<endl;
}

int main()
{
	fun();//19 34 56
}
