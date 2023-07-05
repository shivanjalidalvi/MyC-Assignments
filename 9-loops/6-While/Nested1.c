#include<stdio.h>
int main()
{
	int i, j;
	i = 1;
	while (i <= 10)
	{
		printf("%d\n", i);
		j = 10;
		while (j <= 100)
		{
			printf("\t %d\n", j);
			j = j + 10;
		}
		i++;
	}
	return(0);
}