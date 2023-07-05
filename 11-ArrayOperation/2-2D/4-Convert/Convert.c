#include<stdio.h>
#define NUM_ROWS 5
#define NUM_COLUMNS 3
int main()
{
	int Array[NUM_ROWS][NUM_COLUMNS], Array_1D[NUM_ROWS * NUM_COLUMNS];
	int j, i, num;
	for (i = 0; i < NUM_ROWS; i++)
	{
		printf("Rows%d\n", (i + 1));
		for (j = 0; j < NUM_COLUMNS; j++)
		{
			printf("Column %d\n", (j + 1));
			scanf("%d\n", &num);
		Array[i][j]=num;
		}
	}
	printf("Display 2D array:\n");
	for (i = 0; i < NUM_ROWS; i++)
	{
		printf("Rows%d\n", (i + 1));
		for (j = 0; j < NUM_COLUMNS; j++)
		{
			printf("Array[%d][%d]=%d\n", i, j, Array[i][j]);
		}
	}
	printf("for 1 D array:\n");
	for (i = 0; i < NUM_ROWS; i++)
	{
		for (j = 0; j < NUM_COLUMNS; j++)
		{
			Array_1D[(i * NUM_COLUMNS) + j] = Array[i][j];
		}
	}
	printf("Diplaying 1D array:\n");
	for (i = 0; i < (NUM_ROWS * NUM_COLUMNS); i++)
		printf("Array_1D[%d]=%d\n", i, Array_1D[i]);
	return(0);
}