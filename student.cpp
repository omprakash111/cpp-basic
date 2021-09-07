#include<iostream>
#include<string>
using namespace std;

class student
{
	private:
		int roll;
		string name;
		int mathMarks;
		int phyMarks;
		int chemMarks;
	
	
	public:
		//constructor
		student(int r,string name,int math,int phy,int chem)
		{
			roll=r;
			this->name=name;
		    setMarks(math,phy,chem);
		}
		//prototype
		void setMarks(int,int,int);
		int total();
		char grade();
		int getRoll();
		string getName();
};

//mutator
void student::setMarks(int math,int phy,int chem)
{
	if(math>=0&&math<=100)
	 mathMarks=math;
	 else
	 mathMarks=0;
	
	if(phy>=0&&phy<=100)
	 phyMarks=phy;
	 else
	 phyMarks=0;
	 
	 if(chem>=0&&chem<=100)
	 chemMarks=chem;
	 else
	 chemMarks=0; 
}
//facilitator
int student::total()
{
	return mathMarks+phyMarks+chemMarks;
	
}

char student::grade()
{
	float avg=total()/3.0;
	if (avg>60)
	return 'A';
	else if(avg>=40&&avg<=60)
	return 'B';
	else 
	return 'C';
}

//Accessor
int student::getRoll()
{
	return roll;
}

string student::getName()
{

return name;

}











int main()
{
	int roll;
	string name;
	int m,p,c;
	
	cout<<"Enter the roll number"<<endl;
	cin>>roll;
	
	cin.ignore();
	cout<<"Enter the name"<<endl;
	getline(cin,name);
	
	cout<<"Enter the Math Marks"<<endl;
	cin>>m;
	
	cout<<"Enter the physic Marks"<<endl;
	cin>>p;
	
	cout<<"Enter the chemistry Marks"<<endl;
	cin>>c;
	
	student s(roll,name,m,p,c);
	cout<<"Total marks of roll number "<<s.getRoll()<<" "<<s.getName()<<" is "<<s.total()<<endl;
	cout<<"Grade of student roll number "<<s.getRoll()<<" is "<<s.grade();
	
}
