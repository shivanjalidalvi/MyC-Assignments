#include<stdio.h>
#define NO_OF_ELEMENTS 10
int main()
{
	int i_Array[NO_OF_ELEMENTS];
	int i, num,j, count = 0;
	printf("Enter number:\n");
	for (i = 0; i < NO_OF_ELEMENTS; i++)
	{
		scanf("%d", &num);
		i_Array[i] = num;
	}
	for (i = 0; i < NO_OF_ELEMENTS; i++)
	{
		printf("i_Array[%d]=%d\n", i, i_Array[i]);
	}
	printf("Separating numbers:\n");
	for (i = 0; i < NO_OF_ELEMENTS; i++)
	{
		for (j = 1; j <=i_Array[i]; j++)
		{
			if ((i_Array[i] % j) == 0)
			{
				count++;
			}
		}
		if(count==2)
		printf("%d\n",i_Array[i]);
		count = 0;
	}
	return(0);

}