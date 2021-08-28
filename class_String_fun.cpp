#include<iostream> 
#include<string>

using namespace std;
int main()
{
	string s;
	cout<<"Enter the string";
	getline(cin,s);//om prakash
	cout<<s<<endl;//om prakash
    cout<<"Length = "<<s.length()<<endl;	//10
    cout<<"size = "<<s.size()<<endl;	//10
    cout<<"Capacity = "<<s.capacity()<<endl;//16	
     s.resize(50);
	cout<<"check capacity after resize(50) = "<<s.capacity()<<endl;		//50
	cout<<"max_size = "<<s.max_size()<<endl;//1073741820
	   s.clear();	
		  
		  if(s.empty())
		   cout<<"After clear member function string became Empty"<<endl;	//
		   else 
		   	 cout<<"Not Empty"<<endl;	
	
	
	return 0;
}
