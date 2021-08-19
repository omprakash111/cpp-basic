#include<iostream>


using  namespace std;


int main()
{
	int num,i,count=0;
	cout<<"Enter the number "<<endl;
	cin>>num;
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
	return 0;
}
