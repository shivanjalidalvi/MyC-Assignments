#include<stdio.h>
int main()
{
	int num;
	printf("Enter num:\n");
	scanf("%d", &num);
	if (num < 0)
	{
		printf("Num is negative");
	}
	else if (num > 0 & num <= 100)
		printf("num is between 0 to 100");
	else if (num > 100 & num <= 200)
		printf("num is between 100 to 200 ");
	else if (num > 200 & num <= 300)
		printf("num is between 200 to 300");
	else if (num > 300 & num <= 400)
		printf("num is between 300 to 400");
	else if (num > 400 & num <= 500)
		printf("num is between 400 to 500");
	else if (num > 500)
		printf("num is greater than 500");
	else
		printf("Invalid entry");
	return(0);
}