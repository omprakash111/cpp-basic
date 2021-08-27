#include<iostream>

using namespace std; 


int main()
{
    char *s="hello";
	cout<<s<<endl;
	
	char p[40];
	cin>>p;
	cout<<p<<endl;
	
	cin.get(p,30);
	cout<<p;
	
	/*
	char p[]="om p";
	char k[]="sh j";
	p=k//error
      */
	return 0;
}
