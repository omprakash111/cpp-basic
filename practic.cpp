#include<iostream >
using namespace std;
class A
{
	public:
		int a;
		int b;
	A(int a,int b)
	{
		this->a=a;
		this->b=b;
	}

};
int main()
{
	A f(6,5);
    A h(12,8);
	A g=h;
	cout<<g.a;//12
	
}
