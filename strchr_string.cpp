#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char s1[30],ch;
	cout<<"Enter the string"<<endl;
	cin.getline(s1,30);// om prakash
	
		cout<<"Enter the character for finding string in main string"<<endl;
	cin>>ch;//a
	if(strchr(s1,ch)!=NULL)
	cout<<strchr(s1,ch);//akash
	else
	cout<<"Not found";
	
	//finding the occurrence of a given character within this string and get content of string from occurrence till the end of string
}
