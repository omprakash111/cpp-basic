#include<iostream>
#include<fstream>

using namespace std;


int main()
{
	
	ofstream outfile("My.txt");
	outfile<<"Hello om p"<<endl;
	outfile<<34<<endl;
	
	outfile.close();
}
/* My.txt
Hello om p
34 */
