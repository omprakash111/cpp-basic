#include<iostream>

#include<string>

using namespace std;
int main()
{
	string s="programming";
	
	cout<<s.substr(3)<<endl;//gramming      s.substr(start,number);
	cout<<s.substr(3,4)<<endl;//gram
	
	
	
	return 0;
}
