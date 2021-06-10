#include<iostream>
using namespace std;

int i=0;
long int totshare=0;
double totavg=0.0,totamount=0.0;
class share
{
	public:
		double number,avg,totprice;
	
		void fun()
		{
			cout<<"Enter the Number of share in bandle/packet "<<i+1<<endl;
			cin>>number;
			cout<<"Enter the Share average "<<endl;
			cin>>avg;
			totprice=number*avg;
			
		}
	
};

int main()
{   
   int n;
   cout<<"Enter the number of packet or bandle of share"<<endl;
   cin>>n;
   share S[25];
   do
   {
   	 S[i].fun();
   	 
   	 	totshare=totshare+S[i].number;
   	 	totamount=totamount+S[i].totprice;
   	 	totavg=totamount/totshare;
   	 	
   	 	 cout<<"Total share till packet "<<i+1<<" = "<<totshare<<endl;
   	 	  cout<<"Average now"<<" = "<<totavg<<endl;
   	 	  cout<<"Total amount of share "<<" = "<<totamount<<endl;
		
   	  i++;
   	
	 }while(i<n); 
	return 0;
	
}
