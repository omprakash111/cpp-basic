#include<iostream>

#include<string>

using namespace std;
int main()
{
	string s="hello";
		
	s.insert(1,"omp",2);//s.insert(index,string,length);
	cout<<s;//homello
	return 0;
}
