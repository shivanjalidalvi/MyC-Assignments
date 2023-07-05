#include<stdio.h>
int main()
{
	int i, j;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", i);
		for (j = 1; j < 5; j++)
			printf("\t %d\n", j);
	}
	return(0);
}