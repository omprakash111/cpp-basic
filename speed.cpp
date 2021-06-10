#include<iostream>

using namespace std;

int main()
{
	int u,v,a;
	float speed;
	cout<<"Enter the value of v,u,a or   (v^2-u^2=2as)  "<<endl;
	cin>>v>>u>>a;
	speed=(v*v-u*u)/(2*a);
	
	cout<<"speed = "<<speed;
	return 0;
}
