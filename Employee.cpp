#include<iostream>
#include<string>
using namespace std;

class Employee
{
private:
	int eid;
	string name;

public:
	Employee(int a, string n)
	{
		eid = a;
		name = n;
	}
	int getEid() {
		return eid;
	}
	string getName() {
		return name;
	}
};

class FulltimeEmpolyee :public Employee
{
private:
	int salary;
public:
	FulltimeEmpolyee(int a, string m, int s):Employee(a, m)
	{
		salary = s;
	}

	int getSalary()
	{
		return salary;
	}
};

class ParttimeEmpolyee :public Employee
{
private:
	int wage;
public:
	ParttimeEmpolyee(int a, string n, int w) :Employee(a, n)
	{
		wage = w;
	}

	int getwage()
	{
		return wage;
	}
};


int main()
{
	ParttimeEmpolyee p1(1, "Om prakash", 30000);
	FulltimeEmpolyee p2(2, "Rajesh", 29000);

   cout<<"Salary of "<<p2.getName()<<" is "<<p2.getSalary()<<endl;
    cout<<"Wage of "<<p1.getName()<<" is "<<p1.getwage()<<endl;





	return 0;
}
