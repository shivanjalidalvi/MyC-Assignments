#include<stdio.h>
int main()
{
	int i, j;
	printf("Printing nummber from 10 to 1 & 100 to 10:\n");
	i = 10;
	j = 100;
	while (i>=1,j>=10)
	{
		printf("%d \n \t %d \n", i, j);
		i--;
		j = j - 10;
	}
	return(0);
}