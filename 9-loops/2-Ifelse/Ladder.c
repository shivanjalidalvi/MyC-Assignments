#include<stdio.h>
int main()
{
	int num;
	printf("Enter num:\n");
	scanf("%d", &num);
	if (num < 0)
	{
		printf("Negative number\n");
	}
	else
	{
		if (num > 0 & num <= 100)
		{
			printf("Num is between 0 to 100");
		}
		else
		{
			if (num > 100 & num <= 200)
			{
				printf("Num is between 100 to 200");
			}
			else
			{
				if (num > 200 & num <= 300)
				{
					printf("Num is between 200 to 300");
				}
				else
				{
					if (num > 300 & num <= 400)
					{
						printf("Num is between 300 to 400");
					}
					else
					{
						if (num > 400 & num <= 500)
						{
							printf("Num is between 400 to 500");
						}
						else
						{
							printf("Num is greater than 500");
						}
					}
				}
			}
		}
	}
	return(0);
}