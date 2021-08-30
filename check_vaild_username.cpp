#include<iostream>

#include<string>
 
using namespace std;

int main()
{
	string email="om490prakash@gmail.com";
	int count=0;
	//find the username
	
	int inde=(int)email.find('@');
	
	string user=email.substr(0,inde);
	
	for(int j=0;j<inde;j++)
	{
		if(user[j]>=65&&user[j]<=90    ||  user[j]>=97&&user[j]<=122  || user[j]>=48 &&user[j]<=57   || user[j]=='_' ||   user[j]=='.')
	      count++;
	}
	
	if(count==inde)
	 	cout<<user<<" is valid username  ";
	else 
		cout<<user<<" is not valid username  ";
	return 0;
}
