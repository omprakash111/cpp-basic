#include<iostream>
using namespace std;

int main()
{
	int *p=new int[5];  //Array in heap memory
	cout<<"Enter the 5 value"<<endl;
	cin>>*p>>*(p+1)>>*(p+2)>>*(p+3)>>*(p+4);
	
	cout<<endl<<*p<<endl<<*(p+1)<<endl<<*(p+2)<<endl<<*(p+3)<<endl<<*(p+4)<<endl;
	
	//delete []p; when we not use delete []p before p=NULL then run time error or stop program tha is called memory leak
	
	p=NULL;
	cout<<*p<<endl<<*(p+1)<<endl<<*(p+2)<<endl<<*(p+3)<<endl<<*(p+4);
	
	return 0;
}
