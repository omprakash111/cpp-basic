#include<iostream>

using namespace std;
 
int main()
{

	
	int a[3]={3,5};
	for(int b=0;b<3;b++)
	   cout<<a[b]<<endl;
/*	
	for(int b:a)    //for each loop
	    cout<<b<<endl;
*/	    
	int arr[]={1,5,3,9};
	
	for(int c:arr)
	  cout<<++c<<endl;
	
	
	return 0;
}
