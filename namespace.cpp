#include<iostream>

using namespace std;

namespace First
{
	void fun()
	{
		cout<<"first"<<endl;
	}
};
namespace Second
{
	void fun()
	{
		cout<<"Second"<<endl;
	}
};
namespace Third
{
	void fun()
	{
		cout<<"Third"<<endl;
	}
};

using namespace First;

int main()
{
	fun();
	Second::fun();
	Third::fun();
}
