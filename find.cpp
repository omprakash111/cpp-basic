#include<iostream>

#include<string>

using namespace std;
int main()
{
	string s1="how are you";
	cout<<s1.find("are")<<endl;//4 s1.find(str)or char
	cout<<s1.find('r')<<endl;//5
	
	cout<<s1.rfind("are")<<endl;//4       find letter from right and get index 
	
	cout<<s1.rfind('o')<<endl;//9         
	cout<<s1.rfind("o")<<endl;//9  
	
	
	//s1.find_first_of(char or string,start from index)
	
	cout<<s1.find_first_of('o')<<endl;//1
		cout<<s1.find_first_of("re")<<endl;//5 find from left to right either r or e
	
	//s1.find_last_of(char or string,end to index)
		
			cout<<s1.find_last_of("re")<<endl;//6 find from right to left either r or e
	
	//cout<<s1.find_first_of()<<endl;
	  cout<<s1.find_first_of('o',4)<<endl;//9   
		cout<<s1.find_last_of('o',8)<<endl;//1 
			cout<<s1.find_last_of('o')<<endl;//9
		
		
		cout<<s1.find_first_of('l')<<endl;//garbage value
	return 0;
}
