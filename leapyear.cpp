#include<iostream>
#define CASE 3
using namespace std;

int main()
{
	int year;
	
	cout<<"Enter the year \n";
	cin>>year;
	
	#if CASE==1
	if(!(year%100)) //this give value 0 after ! operator condition true and execute value
	  {
	  	if(!(year%400))
	  	cout<<year<<" leap Year "<<endl;
	  	
	  	else
	  		cout<<year<<" Not leap Year "<<endl;
	  }
	else
	  {
	  	if(!(year%4))
	  	cout<<year<<" leap Year "<<endl;
	  	
	  	else
	  		cout<<year<<" Not leap Year "<<endl;
	  }
	  
	  
	  
	  
	  
	  
	  
	  
	#elif CASE==2
	if(year%100==0)
	  {
	  	if(year%400==0)
	  	cout<<year<<" leap Year "<<endl;
	  	
	  	else
	  		cout<<year<<" Not leap Year "<<endl;
	  }
	else
	  {
	  	if(year%4==0)
	  	cout<<year<<" leap Year "<<endl;
	  	
	  	else
	  		cout<<year<<" Not leap Year "<<endl;
	  }
	
	
	
	
	
	#elif CASE==3
	if(year%400==0)
		cout<<year<<" leap Year "<<endl;
	else if(year%100 && year%4==0)   //year%100 condition give us true then check second condition (a/q to short circuit rule) aget true then else if block execute 
	    	cout<<year<<" leap Year "<<endl;
	else
	    	cout<<year<<"Not leap Year "<<endl;
	
	
	#endif
	
	return 0;
}
