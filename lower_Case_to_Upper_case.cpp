#include<iostream>
#include<string>

using namespace std;

int main()
{ 
   string s1="Welcome7z";
   
   for (int i=0;s1[i]!='\0';i++)
   {
   	if(s1[i]>=97&&s1[i]<=122)
   	 s1[i]=s1[i]-32;
   }
   cout<<s1;//WELCOME7Z
	
	return 0;
}
