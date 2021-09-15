#include<iostream>


using namespace std;

template <class T,class R>

R fun(T x,R y)
{
	return x+y;
}


int main()
{
	cout<<fun(12,5.6);//17.6
}
