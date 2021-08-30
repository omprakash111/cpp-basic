#include<iostream>
#include<string>

using namespace std;

int main()
{ 
   string s1="Welcome7z";
   
   string::iterator it;
   for (it=s1.begin();it!=s1.end();it++)
   {
   	if(*it>=97&&*it<=122)
   	 *it=*it-32;
   }
   cout<<s1;
	
	return 0;
}
