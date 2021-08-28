#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char s1[10]="2346";
	 char s2[10]="54.76";
	long int num;
	 float num2;
	
    cout<<"String to long int"<<endl;
    num=strtol(s1,NULL,10);//13	26	D:\c++\strtol_strtof.cpp	[Error] 'strtol' was not declared in this scope IN DEV C++ BUT VISUAL STDIO working
    num2=strtof(s2,NULL);
    
    cout<<num<<endl<<num2;//2346 54.76
}
