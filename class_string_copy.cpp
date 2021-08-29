#include<iostream>

#include<string>

using namespace std;
int main()
{
	string s1="hello";
	char s2[20],s3[31];
		s1.copy(s2,s1.length());
		cout<<s2<<endl;//hello
		
			s1.copy(s3,3);
		cout<<s3<<endl;//hel#*!  it not take null character so no
		     s3[3]=NULL;
		     
		cout<<s3<<endl;//hel
		
	return 0;
}
