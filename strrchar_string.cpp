#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char s1[30],ch;
	cout<<"Enter the string"<<endl;
	cin.getline(s1,30);// om prakash
	
		cout<<"finding the character from right side of string and get content of string occurrence till the end"<<endl;
	cin>>ch;//a
	if(strrchr(s1,ch)!=NULL)
	cout<<strrchr(s1,ch);//ash
	else
	cout<<"Not found";
	
	//finding the occurrence of a given character from right side within this string and get content of string from occurrence till the end of string
}
