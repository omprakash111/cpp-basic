#include<iostream>
#include<cstring>
//strcat(destination,source);
using namespace std;

int main()
{
	char d[30]="Good";
	char s[]="moon";
	strcpy(d,s);
	cout<<d;//moon
	
	
	return 0;
}
