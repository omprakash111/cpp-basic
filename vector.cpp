#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> v={2,5,8,3};
	
	v.push_back(34);
	v.push_back(24);
	v.pop_back();
	
	vector<int>::iterator itr;
	for(itr=v.begin();itr!=v.end();itr++)
	cout<<*itr;	
}
