#include<stdio.h>
int main()
{
	int i, j, c;
	i = 1;
	while (i<64)
	{
		j = 1;
		while (j<64)
		{
			c = (((i & 0X8) == 0) ^ ((j & 0X8) == 0));
			if (c == 0)
				printf(" ");
			if (c == 1)
				printf("*");
			j++;

		}
		i++;
	}
	return(0);
}