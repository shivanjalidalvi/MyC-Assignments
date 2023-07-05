#include<stdio.h>
int main()
{
	int i, j, k;
	i = 1;
	while (i <= 10)
	{
		printf("%d\n", i);
		j = 1;
		while (j <= 5)
		{
			printf("\t %d\n", j);
			k = 1;
			while (k <= 3)
			{
				printf("\t \t %d\n", k);
				k++;
			}
			j++;
		}
		i++;
	}
	return(0);
}