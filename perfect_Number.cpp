/*   A number is a perfect number if is equal to sum of its proper divisors,
 that is, sum of its positive divisors excluding the number itself. 
 Write a function to check if a given number is perfect or not.   */

#include<iostream>

using  namespace std;


int main()
{
	int num,i,sum=0;
	cout<<"Enter the number "<<endl;
	cin>>num;
	//finding factor of number and sum in sum variaable till i<num or i<= (num-1)
	
	for(i=1;i<num;i++)
	{
		if(num%i==0)
	    {
		
		 cout<<i<<endl;
		 sum=sum+i;
		 
     	}
		 
		
	}
	
	
	if(sum==num)
	 cout<<num<<" is perfect number "<<endl;
	else
	  cout<<num<<" is not perfect number "<<endl;
	return 0;
}
