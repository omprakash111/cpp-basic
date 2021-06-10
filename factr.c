#include<stdio.h>

#include<conio.h>

int fun(int);

int main()
{
	int num,fact;
	printf("enter the number\n");
	scanf("%d",&num);
	fact=fun(num);
	printf("factorial=%d",fact);
	
	return 0;
	
}

int fun(int num)
{
	int facti;
	if(num==1)
	return 1;
	else
	facti=num*fun(num-1);
	

}
