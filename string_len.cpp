#include<iostream>
#include<cstring>
using namespace std; 


int main()
{
    
	
	char str1[]="om prakash";
	cout<<"Length of "<<str1<<" "<<strlen(str1);
	
	char *s;
	cin.getline(s,100);//om p
	
	cout<<endl<<"Length of "<<s<<" "<<strlen(s);//Length of om p 4
	
	
	
	return 0;
}
