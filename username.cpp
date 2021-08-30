#include<iostream>

#include<string>

using namespace std;

int main()
{
	string email="om490prakash@gmail.com";
	//find the username
	
	int i=(int)email.find('@');
	
	string user=email.substr(0,i);
	cout<<"username is "<<user<<endl;
	return 0;
}
