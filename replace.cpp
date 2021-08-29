#include<iostream>

#include<string>

using namespace std;
int main()
{
	string s="programming";
		
	s.replace(3,6,"hh");//s.replace(index,till word,string);
	cout<<s;//prohhng
	return 0;
}
