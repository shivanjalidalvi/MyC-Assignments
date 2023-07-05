#include<stdio.h>
int main()
{
	int i, j;
	for (i = 10, j = 100; i >= 0, j >= 10; i--, j=j-10)
	{
		printf("%d \t %d \n", i, j);
	}
	return(0);
}