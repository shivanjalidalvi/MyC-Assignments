#include<stdio.h>
int main()
{
	int i, j;
	printf("Printing numbers:\n");
	for (i = 1; i < 100; i++)
	{
		if (i % 2 != 0)
		{
			continue;
			for (j = 1; j < 100; j++)
			{
				if (j % 2 == 0)
				{
					continue;
				}
				else
				{
					printf("%d\n", j);
				}
			}
		}
		else
		{
			printf("%d\n", i);
		}
		
	}
	return(0);
}