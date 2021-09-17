//how to read txt from file
#include<iostream>
#include<fstream>

using namespace std;


int main()
{
	
	ifstream infile("My.txt");
	
	
	if(!infile.is_open())
	cout<<"file is not opened"<<endl;
	
	
	string str;
	int x;
	
	getline(infile,str);
	
	infile>>x;
	infile>>x;
	cout<<str<<" "<<x;
	
	if(infile.eof())
	cout<<"end of file reached"<<endl;
	
	
    infile.close();
}
/*Hello om p 34end of file reached */
