#include<iostream>
#include<iomanip>
#include <sstream>
using namespace std;

int main()
{
	cout<<hex<<12<<endl;//c
	cout<<oct<<12<<endl;//14
	cout<<dec<<12<<endl;//12
	cout<<fixed<<12.6547<<endl;//12.654700
	cout<<setprecision(2)<<12.6547<<endl;//12.65
	cout<<scientific<<12.6547<<endl;//1.265470e+001
	cout<<"om"<<setw(10)<<"Hello"<<endl;//om     Hello         five space between both string


     // Using setfill()
    cout << "Setting the fill char"
         << " setfill to *: \n"
         << setfill('*')
         << setw(10)
		 <<34;/*  Setting the fill char setfill to *:
		          ********34               */
    
}

