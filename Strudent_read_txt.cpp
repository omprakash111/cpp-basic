#include<iostream>
#include<fstream>
#include<string>
//how to write object in file throught operator overloading
using namespace std;

class Student
{
	public:
		string name;
		int roll;
		string branch;
		
	friend ostream & operator<<(ostream &c,Student &s);
	friend ifstream & operator>>(ifstream &inf,Student &s1);
};




ostream & operator<<(ostream &c,Student &s)//output on monitor
{
	c<<s.name<<endl;
	c<<s.roll<<endl;
	c<<s.branch<<endl;
	return c;
}


ifstream & operator>>(ifstream &inf,Student &s1)//get value from txt file to object
{
	
	getline(inf,s1.name);                  //inf>>s1.name;
	inf>>s1.roll;
	inf>>s1.branch;
	return inf;
}


int main()
{
	Student s1;
	
	ifstream infile("Student.txt");
	infile>>s1;
	
	infile.close();
	cout<<s1;
}
/* Student.txt
om prakash 
3
cs  */
/* output
om prakash 
3
cs */
