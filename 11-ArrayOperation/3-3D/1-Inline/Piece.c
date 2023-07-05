#include<stdio.h>
int main()
{
	int iArray[5][3][2] = { {{2,6},{5,7},{5,8}},
						{{7,3},{4,6},{9,0}},
						{{1,4},{6,7},{5,9}},
						{{4,6},{6,0},{8,9}},
						{{1,2},{3,4},{5,6}} };
	int iArray_size, int_size;
	int array_width, array_height, array_depth, num_elements,i,j,k;

	int_size = sizeof(int);
	iArray_size = sizeof(iArray);
	array_width = iArray_size / sizeof(iArray[0]);
	printf("Size of width in 3D array=%d\n", array_width);
	array_height = sizeof(iArray[0]) / sizeof(iArray[0][0]);
	printf("Size of height in 3D array =%d\n", array_height);
	array_depth = sizeof(iArray[0][0]) / int_size;
	printf("Size of depth in 3D array=%d\n", array_depth);
	num_elements = array_height * array_depth * array_width;
	printf("Number of elements in 3D array=%d\n", num_elements);

	for (i = 0; i < array_width; i++)
	{
		printf("**Row%d**\n", (i + 1));
		for (j = 0; j < array_height; j++)
		{
			printf("**Columns%d**\n", (j + 1));
			for (k = 0; k < array_depth; k++)
			{
				printf("iArray[%d][%d][%d]=%d\n", i, j, k, iArray[i][j][k]);
			}
		}
	}
	return(0);
}