#include<iostream>
#include<fstream>

using namespace std;


int main()
{
	
	ofstream otf("My.txt",ios::app);
	otf<<"rakash"<<endl;
	otf<<34<<endl;
	otf.close();
}
/* My.txt            after compiler ofstream file
Hello om p
34 
rakash
34      */
