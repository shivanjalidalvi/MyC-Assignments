#include<stdio.h>
int main()
{
	int i, j;
	i = 1;
	
	do
	{
		printf("%d\n", i);
		j = 1;
		do
		{
			printf("\t%d\n", j);
			j = j++;
		} while (j<=5);
		i++;
	} while (i <= 10);
	printf("\n");
	return(0);
}

