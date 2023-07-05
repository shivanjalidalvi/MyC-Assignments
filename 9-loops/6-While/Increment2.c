#include<stdio.h>
int main()
{
	int i,j;
	printf("Printing numbers from 1 to 10 & 10 to 100:\n");
	i = 1;
	j = 10;
	while (i <= 10,j<=100)
	{
		printf("%d\n \t %d\n", i, j);
		i++;
		j = j + 10;
		
	}
	return(0);
}