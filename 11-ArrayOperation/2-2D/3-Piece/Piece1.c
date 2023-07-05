#include<stdio.h>
int main()
{
	int Array[3][5];
	int Array_size, num_rows, num_columns, num_elements,i,j;
	Array_size = sizeof(Array);
	num_rows = Array_size / sizeof(Array[0]);
	num_columns = sizeof(Array[0]) / sizeof(int);
	num_elements = num_rows * num_columns;
	printf("Number of rows=%d\n", num_rows);
	printf("Number of columns=%d\n", num_columns);
	printf("Number of elements=%d\n", num_elements);
	Array[0][0] = 3;
	Array[0][1] = 4;
	Array[0][2] = 5;
	Array[0][3] = 25;
	Array[0][4] = 15;

	Array[1][0] = 6;
	Array[1][1] = 7;
	Array[1][2] = 8;
	Array[1][3] = 58;
	Array[1][4] = 81;

	Array[2][0] = 9;
	Array[2][1] = 50;
	Array[2][2] = 1;
	Array[2][3] = 11;
	Array[2][4] = 10;
	
	for (i = 0; i < num_rows; i++)
	{
		printf("***Row%d**\n",( i+1));
		for (j = 0; j < num_columns; j++)
		{
			printf("Array[%d][%d]=%d\n", i, j, Array[i][j]);
		}
	}
	return(0);
}