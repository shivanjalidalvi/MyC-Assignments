#include<stdio.h>
int main()
{
	int i = 5;
	printf("Increment value of 'i':\n");
	printf("Value of 'i'=%d\n", i);
	printf("Value of '++i'=%d\n", ++i);
	printf("Value of 'i'=%d\n", i);
	printf("Value of 'i++'=%d\n", i++);

	printf("Decrement value of 'i':\n");
	printf("Value of 'i'=%d\n", i);
	printf("Value of '--i'=%d\n", --i);
	printf("Value of 'i'=%d\n", i);
	printf("Value of 'i--'=%d\n", i--);

	return(0);
}