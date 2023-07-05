#include<stdio.h>
int main()
{
	int i, j;
	i = 1;
	j = 10;
	do
	{
		printf("%d\n \t %d\n", i,j);
		i++;
		j = j+10;
		
	} while (i<=10,j<=100);
	return(0);
}