#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s1="hello";
	string::reverse_iterator it;

	
	for(it=s1.rbegin();it!=s1.rend();it++)
	 cout<<*it<<endl;/* o
	                    l
	                    l 
	                    e
	                    h
	                       */
	    
;	return 0;
}
