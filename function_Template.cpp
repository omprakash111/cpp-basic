#include<iostream>
//The function which are generic in term of data type mean two having same number of parameter  but the data type of parameter are diffent .
//both function logic is as it is,only difference is the data type then in this case we can use  fuction template for reduce code and use efficiently  
using namespace std;
template<class T>
T max(T x,T y)
{
	if(x>y)
	return x;
	else
	return y;
}



int main()
{
	cout<<max(2,7)<<endl;//7          working on turbo c++ 
    cout<<max(8.8,7.6)<<endl;//8.8  double float
	cout<<max(7.8f,1.5f)<<endl;	//7.8
	
	return 0;
}
