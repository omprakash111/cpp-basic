#include<iostream>

using namespace std;

class car
{
	public:
	virtual void start()
	{
		cout<<"car start"<<endl;
	}
	
	virtual void stop()
	{
		cout<<"car stop"<<endl;
	}
};

class BMWcar:public car
{
	public:
	void start()
	{
		cout<<"car of BWM start"<<endl;
	}
	
	void stop()
	{
		cout<<"car of BMW stop"<<endl;
	}
};

class novacar:public car
{
	public:
	 void start()
	{
		cout<<"car of nova start"<<endl;
	}
	
	void stop()
	{
		cout<<"car of nova stop"<<endl;
	}
};


int main()
{
	car *c=new BMWcar();
	c->start();//car of BWM start
	c=new novacar();
	c->start();//car of nova start
	}
