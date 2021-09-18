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
		
	friend ofstream & operator<<(ofstream &ofs,Student &s1);
		
};

ofstream & operator<<(ofstream &ofs,Student &s)
{
	ofs<<s.name<<endl;
	ofs<<s.roll<<endl;
	ofs<<s.branch<<endl;
	return ofs;
}
int main()
{
	Student s1;
	s1.name="om prakash";s1.roll=3;s1.branch="CS";
	ofstream outfile("Student.txt",ios::app);
	outfile<<s1;
	outfile.close();
	
}
