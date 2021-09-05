#include<iostream>

using namespace std;
class Test
{
	int a;
	int *p;
	
	public:
	Test(int x)
	{
		a=x;
		p=new int[a];
		
	    setArray();
	}
	
	Test(Test &t)
	{
		a=t.a;
		p=new int[a];
		copyArray(t.p,p,a);
	}
	
	void setArray()
	{  
	    cout<<"Enter the value"<<endl;
		for(int i=0;i<a;i++)
		cin>>p[i];
	}
	void getArray()
	{
		for(int i=0;i<a;i++)
		cout<<p[i]<<endl;
	}
	
	void copyArray(int *pre,int *aft,int a)
	{
			for(int i=0;i<a;i++)
		          *(aft+i)=*(pre+i);
	}
};

int main()
{
	int n;
	cout<<"Enter the number of size Array "<<endl;
	cin>>n;
	 Test t(n);
	 
	 cout<<"You are entered value are :"<<endl;
	 t.getArray();
	 
    
    
    Test tea(t);
    
	cout<<"You are copy value are :"<<endl;
	 tea.getArray();
	
	return 0;
}

