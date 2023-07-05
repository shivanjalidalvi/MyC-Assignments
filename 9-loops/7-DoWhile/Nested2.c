#include<stdio.h>
int main()
{
	int i, j, k;
	i = 1;
	do
	{
		printf("%d\n", i);
		j = 1;
		do
		{
			printf("\t%d\n", j);
			k = 1;
			do
			{
				printf("\t\t %d\n", k);
				k++;
			} while (k<=3);
			j++;
		} while (j<=5);
		i++;
	} while (i<=10);
	return(0);
}