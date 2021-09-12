#include<iostream>
using namespace std;
class om;
class Test
{
  private:int a;
  protected :int b;
  public:int c;
  friend class om;//friend class allow to access all specifer upon object
};

class om
{
	public:
		Test m;
		void fun()
		{
			m.a=10;
			m.b=45;
			
			m.c=78;
			cout<<m.a<<" "<<m.b<<" "<<m.c<<endl;
		}
		
};

int main()
{
	om g;
	g.fun();//10 45 78
}

