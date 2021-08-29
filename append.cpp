#include<iostream>

#include<string>

using namespace std;
int main()
{
	string s="hello";
		
	s.append(" om prakash");
	cout<<s.capacity()<<endl<<s.length();
	return 0;
}
