#include<iostream>

#include<string>

using namespace std;

int main()
{
	string s;
	int vol=0,cons=0,word=0,space=0;
	cout<<"Enter the sentence\n";
	getline(cin,s);//om###pr###k7^     here # denote space
	
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'|| s[i]=='i'|| s[i]=='O'||s[i]=='o'|| s[i]=='U'||s[i]=='u')
		{
			vol++;
		}
		
		else if(s[i]>=65&&s[i]<=90 ||s[i]>=97&&s[i]<=122)
		{
			cons++;
		}
		
		else if(s[i]==' ')
	    {
			word++; space++;
			if(s[i-1]==' ')
			{
				word--;
			}
		     
		
	    }
	    
	}
	
	cout<<"Number of vowel ="<<vol<<endl;//1
	cout<<"Number of constant ="<<cons<<endl;//4
	cout<<"Number of word ="<<word+1<<endl;//3
	cout<<"Number of space ="<<space<<endl;//6
	
	return 0;
}
