#include<iostream>

using namespace std;


int main()
{
	int A[10],n=10;
	int key,i;
	
	cout<<"Enter the number"<<endl;
	
	for(i=0;i<n;i++)
	   {
           cin>>A[i];	   	
	   }
	
	cout<<"Enter key"<<endl;
	cin>>key;
	
	for(i=0;i<n;i++)
	   {
           if(key==A[i])
           {
		   
		     cout<<key<<" Found on index "<<i<<endl;
			 return 0;	
		}
	   }
	      cout<<key<<"is not Found in array"<<endl;
	return 0;
	
}
