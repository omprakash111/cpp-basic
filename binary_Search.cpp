#include<iostream>

//Binary search
using namespace std;

int main()
{
	
	int A[10]={2,4,9,13,16,17,27,29,34,38};   //we must sort array
	
	int key,l=0,h=9,mid;
	
	cout <<"Enter the key "<<endl;
	cin>>key;
	
	while(l<=h)
	{
		mid=(l+h)/2;
		if(key==A[mid])
		{
			cout<<"Found "<<key<<" index on "<<mid<<endl;
			return 0;
		}
		else if(key<A[mid])
		 h=mid-1;
		
		else if(key>A[mid])
		 l=mid+1;
		
		
		
		
	}
	        cout<<"Not Found "<<key<<endl;
	
	
	
	
	
	
	
	return 0;
}
