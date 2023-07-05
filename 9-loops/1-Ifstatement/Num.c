#include<stdio.h>
int main()
{
	int num;
	printf("Enter the vaalue of num:\n");
	scanf("%d", &num);
	if (num < 0)
	{
		printf("Numer if negative");
	}
	if (num > 0 & num <= 100)
	{
		printf("Number is between 0 to 100\n");
	}
	if (num > 100 & num <= 200)
	{
		printf("Number is between 100 to 200");
	}
	if (num > 200 & num <= 300)
	{
		printf("Number is between 200 to 300");

	}
	if (num > 300 & num <= 400)
	{
		printf("Number is between 300 to 400");
	}
	if (num > 400 & num <= 500)
	{
		printf("Number is between 400 to 500");
	}
	if (num > 500)
	{
		printf("Number is greater than 500");
	}
	return(0);
}