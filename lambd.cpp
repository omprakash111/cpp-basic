#include<iostream>
//lambd expressions It is defining unmamed function .more inline function 
using namespace std;

int main()
{
	
	//[capture_list](parameter_list)->returntype{body};
	[]() {cout << "Hello"; }();//Hello

	
	auto f = []() {cout << "om prakash"; };
	f();//om prakash


	[](int x, int y) {cout << "Sum" << x + y; }(10, 5);//sum 15

	int x = [](int a, int b)->int {return a + b; }(10, 6);
	cout << x;//16
//

	int k = 10;
	auto g = [&k]() {cout << k << endl; };
	g();
	k++;
	g();
	
//

	int a = 77, b = 88;
	//[a, b]() {cout << ++a;}(); a not modify   
	[&]() {cout << ++a << " " << ++b; }();//78 89
}
