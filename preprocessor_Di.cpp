#include<iostream>
using namespace std;
#define KL
#define MSG(x) #x
#define PI 3.143
#define c cout
#ifdef KL
   #define KL 3
#endif
   
   
int main()
{
	c<<MSG(hello)<<endl;
	c<<PI*5<<endl;
	c<<KL<<endl;
}
