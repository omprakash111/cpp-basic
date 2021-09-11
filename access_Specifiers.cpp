//way of inheritance
#include<iostream>
using namespace std;

class parent
	{
		private:int a;
		protected:int b;
		public: int c;
		
		void funParent()
		{
			a=10;
			b=15;
			c=32;
		}
		
	};
	
class child:private parent
{
	private:
	protected:
	public:
		void funChild()
		{
		 //	a=10;
			b=15;
			c=32;
		}
};


class Grandchild:public child
{
	private:
	protected:
	public:
		void funGrand()
		{
			//a=10;
		//	b=15;
			//c=32;
		}
}; 

int main()
{
	child ar;

	
	
	
}	
