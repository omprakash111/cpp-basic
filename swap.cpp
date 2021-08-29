#include<iostream>

#include<string>

using namespace std;
int main()
{
	string s1="hello";
	string s2="om prakash";
			cout<<s1<<endl<<s2<<endl;
	s1.swap(s2);
	cout<<endl<<"after swap :"<<endl<<s1<<endl<<s2<<endl;
	return 0;
}
