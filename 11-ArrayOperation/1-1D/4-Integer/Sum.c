#include<stdio.h>
#define NO_ELEMENTS 10
int main()
{
	int i_Array[NO_ELEMENTS];
	int i, num, sum = 0;
	printf("Enter Num:\n");
	for (i = 0; i < NO_ELEMENTS; i++)
	{
		scanf("%d", &num);
		i_Array[i] = num;
	}
	for (i = 0; i < NO_ELEMENTS; i++)
	{
		sum = sum + i_Array[i];
		printf("Sum=%d\n", sum);
	}
	return(0);
}