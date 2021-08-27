#include<iostream>
#include<cstring>
//strstr(main,sub); occurrence of sub string in main string then get the content of a string from that occurrence till the end of a string.
using namespace std;

int main()
{
	char d[30]="programming";
	char s[]="gram";
	
	cout<<strstr(d,s);//gramming
	
	
	return 0;
}
