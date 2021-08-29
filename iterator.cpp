#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s1="hello";
	string::iterator it;      //like as string pointer

	
	for(it=s1.begin();it!=s1.end();it++)
	 cout<<*it<<endl;/* h
	                    e
	                    l 
	                    l
	                    o
	                       */
	    
;	return 0;
}
