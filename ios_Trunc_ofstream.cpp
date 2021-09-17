#include<iostream>
#include<fstream>

using namespace std;


int main()
{
	
	ofstream otf("My.txt",ios::trunc);//remove previous text from file
	otf<<"raka"<<endl;
	otf<<34<<endl;
	otf.close();
}
/* My.txt
raka
34 */
