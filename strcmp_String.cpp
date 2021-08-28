#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char s1[30],s2[30];
	cout<<"Enter the first string"<<endl;//hello
	cin.getline(s1,30);
	cout<<"Enter the second string"<<endl;//Hello
	cin.getline(s2,30);
	
    cout<<"Compare the ASCII character by character from first string to second string"<<endl;
    cout<<strcmp(s1,s2);//in dev c++ 1 but in turbo c++ 32 difference ASCII value
}
