#include<iostream>

typedef int matrix;
typedef int row;
typedef int column;
typedef int loopcounter;

//Add of matrix
using namespace std;

int main()
{ 
 matrix A[100][100],B[100][100],C[100][100];
 row r1,r2;
 column c1,c2;
 loopcounter i,j,k;
 
 int sum=0;
  
  cout <<"enter the  matrix A  row and column "<<endl;
  cin>>r1>>c1;
  
   cout <<"enter the  matrix B  row and column "<<endl;
  cin>>r2>>c2;
  
  if(r1!=r2 && c1!=c2)
  {
  	cout<<"Can't be Add Matrix  "<<endl;
  	
  	return 0;
  }
  
  //matrix A 
  
  cout<<"enter the value in matrix A"<<endl;
  for(i=0;i<r1;i++)
  {
  	for(j=0;j<c1;j++)
  	 cin>>A[i][j];
  	
  }
  //matrix B
  
 
  
  cout<<"enter the value in matrix B"<<endl;
  for(i=0;i<r2;i++)
  {
  	for(j=0;j<c2;j++)
  	 cin>>B[i][j];
  	
  }
  
  //Displaying Matrix A and Matrix B
  cout<<endl;
  cout<<"Display Matrix A"<<endl<<endl;
  for(i=0;i<r1;i++)
  {
  	for(j=0;j<c1;j++)
      {
	  
     	 cout<<A[i][j] <<" ";
      }
      cout<<endl;
  }
  
   cout<<endl;
  cout<<"Display Matrix B"<<endl<<endl;
  for(i=0;i<r2;i++)
  {
  	for(j=0;j<c2;j++)
      {
	  
	  
     	 cout<<B[i][j] <<" ";
      }
      cout<<endl;
  }
	
	   cout<<endl;
	 
	 
    //Add matrix A and matrix B
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			
 		     C[i][j]=A[i][j]+B[i][j];
		}
		
	}
	
	
	
	
	//Add display
	
	cout<<endl;
  cout<<"Display Added Matrix:  "<<endl<<endl;
  for(i=0;i<r1;i++)
  {
  	for(j=0;j<c2;j++)
      {
	  
	  
     	 cout<<C[i][j] <<" ";
      }
      cout<<endl;
  }
	
	return 0;
}

