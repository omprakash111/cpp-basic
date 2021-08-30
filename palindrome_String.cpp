#include<iostream>
#include<string>

using namespace std;

int main()
{
	 string s1;
	 string rev;
	 int i,j;
	 cout<<"Enter the word\n";
	 cin>>s1;//so that word input only                                moom
	 
	 int len=(int)s1.length();
	 
	 rev.resize(len);
	 
	 for(i=0,j=len-1;i<len;i++,j--)
	   rev[j]=s1[i];
	 
	 if(s1.compare(rev)==0)
	  cout<<s1<<" is palindrome";                                    //moom is palindrome
	else
	  cout<<s1<<" is not palindrome";  
	 
	 
	return 0;
}
