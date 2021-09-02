#include<iostream>
using namespace std;
int & fun(int &a) 
{
	a+=1;
 cout<<a<<endl;//11  26
  return a; //It can return formal parameters if they are reference 
   }
   
    
int main() 
{  
 int x=10,i; 
  fun(x)=25;//lvalue and this statement mean reference value and also variable fun(x)=25 or x=25.  And function action as reference of x=25
  i=fun(x);
 cout<<x<<endl<<i;// 26  26
 return 0;
  }
