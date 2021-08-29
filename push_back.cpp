#include<iostream>

#include<string>

using namespace std;
int main()
{
	string s="hello";
		
	s.push_back('z');//s.push_back(only single character);
	cout<<s;//helloz
	return 0;
}
