#include<iostream>

#define CASE 2

using  namespace std;


int main()
{
	int num,i,count=0;
	cout<<"Enter the number "<<endl;
	cin>>num;
	#if CASE==1
	//finding factor of number and sum in sum variaable till i<num or i<= (num-1)
	
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
	    {
		
		 count++;
		 
     	}
		 
		
	}
	
	
	if(count==2)
	 cout<<num<<" is Prime  number "<<endl;
	else
	  cout<<num<<" is not Prime number "<<endl;
	  
	#elif CASE==2
	
		for(i=2;i<num;i++)
	{
		if(num%i==0)
	    {
		
		 break;
		 
     	}
		 
		
	}
	
	
	if(num==i)
	 cout<<num<<" is Prime  number "<<endl;
	else
	  cout<<num<<" is not Prime number "<<endl;
	
	#endif
	return 0;
}
