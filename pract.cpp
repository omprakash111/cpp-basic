#include<iostream>

using namespace std;
 
int main()
{
	
	
	int a[3]={3,5};
	for(int b=0;b<3;b++)
	   cout<<a[b]<<endl;
	
	for(int b:a)    //for each loop
	    cout<<b;
	
	
	return 0;
}
