#include<stdio.h>

//using namespace std;
float value(float p, int n, float r = 0.15);
	void printline(char ch = '*', int len = 40);
int main()
{
	float amount;
	

	printline();
	amount = value(5000.00, 5);
	printf("Final value = \n",amount);


	amount = value(10000.00, 5, 0.30);
		printf("Final value = \n",amount);

	printline('=');
	return 0;
}
float value(float p, int n, float r)
{
	int year = 1;
		float sum = p;

	while (year <= n)
	{
		sum = sum * (1 + r);
		year = year + 1;
	}
	return(sum);
}


void printline(char ch, int len)
{
	for (int i = 1; i <= len; i++)
		printf("%c", ch);
	printf("\n");
}
