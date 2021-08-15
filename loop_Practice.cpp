#include<iostream>

#define TYPELOOPPRACTICE 2


using namespace std;
void fun();
void fun2();
# pragma startup fun
# pragma exit fun2
void fun()
{   cout<<"Case is define in preprocessor directive"<<endl;
	cout<<"1. while infinite loop"<<endl;
	cout<<"2. while loop print five statement"<<endl;
	cout<<"3. do while loop print five statement"<<endl;
	cout<<"4. for loop print five statement"<<endl;
	cout<<"\n \n \n";
}

void fun2()
{
	cout<<"End"<<endl;
}


int main()
{
	int i=1;
	#if TYPELOOPPRACTICE==1
	    while(1)
		{
			cout<<"Infinite loop"<<endl; //infinite loop
			
		} 
	#elif TYPELOOPPRACTICE==2
	    while(i<=5)
	    {
	    	cout<<i<<" Hello"<<endl;
	    	i++;
		}
	#elif TYPELOOPPRACTICE==3
	    do 
	    {
	    	cout<<i<<" Friend"<<endl;
		  i++;
		}while(i<=5);
		
	#elif TYPELOOPPRACTICE==4
	    for(;i<=5;i++)
	    {
	    	cout<<i<<" ford"<<endl;
		}
	#endif
		   
	return 0;
}


