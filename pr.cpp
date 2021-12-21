#include<iostream>

using namespace std;
class A
{
	int a;
	int n;
	public:
	    A(int a,int n)
		{
			this->a=a;
			this->n=n;
		}
		void fun()
		{
			cout<<a <<" "<<n;
		}
};
int main()
{
	A s(7,6);
	s={87,98};
	s.fun();
}
