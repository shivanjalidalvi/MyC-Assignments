#include<stdio.h>
int main()
{
	int i, j;
	printf("Printing numbers from 1 to 100\n");
	for (i = 0, j = 10; i < 10, j < 100; i++, j = j + 10)
	{
		printf(" %d \t %d\n", i, j);
	}
	return(0);
}