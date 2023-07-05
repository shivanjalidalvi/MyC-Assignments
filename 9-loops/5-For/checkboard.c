#include<stdio.h>
int main()
{
	int i, j, c;
	for (i = 1; i < 64; i++)
	{
		for (j = 1; j < 64; j++)
		{
			c = (((i & 0 * 8) == 0) ^ ((j & 0 * 8) == 0));
			if (c == 0)
				printf(" ");
			if (c == 1)
				printf("*");
		}
	}
	return(0);
}