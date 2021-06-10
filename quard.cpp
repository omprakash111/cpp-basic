 #include<iostream>
 #include<cmath>
 using namespace std;
  
 int main()
 {
 	float a,b,c,r1,r2;
    cout<<"enter value of ax^2+bx+c quardtic  a,b,c"<<endl;
	cin>>a>>b>>c;
	r1=(-b+sqrt(b*b-4*a*c))/(2*a);
	r2=(-b-sqrt(b*b-4*a*c))/(2*a); 	
	
	cout<<"Root of quartic equation "<<r1<<" "<<r2<<endl;
	return 0;
 }
