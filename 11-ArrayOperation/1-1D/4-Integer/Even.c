#include<stdio.h>
#define NO_OF_ELEMENTS 10
int main()
{
	int i_Array[NO_OF_ELEMENTS];
	int i, num;
	printf("Enter num:\n");
	for (i = 0; i < NO_OF_ELEMENTS; i++)
	{
		scanf("%d", &num);
		i_Array[i] = num;
	}
	for (i = 0; i < NO_OF_ELEMENTS; i++)
	{
		if ((i_Array[i] % 2) == 0)
			printf("%d\n", i_Array[i]);
	}
	for (i = 0; i < NO_OF_ELEMENTS; i++)
	{
		if ((i_Array[i] % 2) != 0)
			printf("%d\n", i_Array[i]);
	}
	return(0);
}