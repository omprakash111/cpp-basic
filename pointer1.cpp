#include<iostream>

using namespace std;

int main()
{
	int A[5]={2,4,6,8,10};
	int *p,*q;
	p=A;q=p+2;
	cout<<"p = "<<p<<endl;//0x23fe84
	cout<<"q = "<<q<<endl;//0x23fe8c
	cout<<"3[A] = "<<3[A]<<endl;//8
	cout<<"A[3] = "<<A[3]<<endl;//8
	cout<<"*(A+3) = "<<*(A+3)<<endl;//8
	cout<<"++p = "<<++p<<endl;//0x23fe88
	cout<<"--p = "<<--p<<endl;//0x23fe84

	cout<<"p[1] = "<<p[1]<<endl;//4
	cout<<"1[p] = "<<1[p]<<endl;//4
	// error: array constant variable and store own address only so it can't increament then address of array variable variable change  
	//cout<<"A++ = "<<A++<<endl;
	cout<<"q-p= "<<q-p<<endl;//2
	cout<<"size of int"<<sizeof(int)<<endl;//4
	cout<<"q[0] = "<<q[0]<<endl;//6
}
