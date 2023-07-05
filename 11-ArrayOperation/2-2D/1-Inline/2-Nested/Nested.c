#include<stdio.h>
int main()
{
	int Array[5][3] = { {1,2,3},{4,5,6},{7,8,9},{12,13,14},{10,11,15} };
	int i_size,Array_size, num_rows, num_coulumns, num_elements,i,j;
	i_size = sizeof(int);
	Array_size = sizeof(Array);
	num_rows = Array_size / sizeof(Array[0]);
	printf("Number of rows=%d\n", num_rows);
	num_coulumns = sizeof(Array[0]) / i_size;
	printf("Number of columns=%d\n", num_coulumns);
	num_elements = num_rows * num_coulumns;
	printf("Number of elements=%d\n", num_elements);
	for (i = 0; i < num_rows; i++)
	{
		printf("****Rows****=%d\n", (i + 1));
		for (j = 0; j < num_coulumns; j++)
		{
			printf("Array[%d][%d]=%d\n",i,j,Array[i][j]);
		}
	}
	return(0);
}