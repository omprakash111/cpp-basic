#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s1="hello";
	string::iterator it;
	
	for(it=s1.begin();it!=s1.end();it++)
	 *it=*it-32;
	 cout<<s1;//HELLO
;	return 0;
}
