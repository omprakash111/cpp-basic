#include<iostream>
using namespace std;

int main()
{
	int day;
	cout<<"Enter day number (1-7) \n";
	cin>>day;
	
	switch(day)
	{
		case 1: cout<<"Monday";
		       break;
	    case 2: cout<<"Tuesday";
		       break;
		case 3: cout<<"Wednesday";
		       break;
		case 4: cout<<"Thursday";
		       break;
		case 5: cout<<"Friday";
		       break;
		       
		case 6: cout<<"Saturday";
		       break;
		case 7: cout<<"Sunday";
		       break;
		default:cout<<"Invaild day number ";
		
	}
	
	return 0;
	
}
/*
Switch

1. Switch is a branch and control statement
2. Switch can have 0 or more cases
3. Each case is defined with a label
4. Depanding on the value of expression in switch corresponding case black is executed
5. Is a case block is not available then default block is executed
6. Default block is optional
7. Every case block must terminate with break
8. If breaks are not metioned then cases will fall all case and ecxecute
9. Switch is used for menu-driven program


*/
