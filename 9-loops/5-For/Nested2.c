#include<stdio.h>
int main()
{
	int i, j, k;
	for (i = 0; i < 10; i++)
	{
		printf("i=%d\n", i);
		for (j = 0; j < 5; j++)
		{
			printf("\t j=%d\n", j);
			for (k = 0; k < 3; k++)
				printf("\t\t k=%d\n", k);
		}
	}
	return(0);
}