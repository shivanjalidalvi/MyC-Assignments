#include<stdio.h>
int main()
{
	int i, j;
	for (i = 0; i < 20; i++)
	{
		for (j = 1; j < 20; j++)
		{
			if (j > 1)
				break;
			else
				printf("**");;
		}
	}
	return(0);
}