#include<stdio.h>
int main()
{
	int Array[5][3] = { {1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15} };
	int i_size;
	int Array_size, num_rows, num_coulumns, num_of_elements;
	i_size = sizeof(int);
	Array_size = sizeof(Array);
	num_rows = Array_size /sizeof( Array[0]);
	num_coulumns = sizeof(Array[0]) / i_size;
	num_of_elements = num_rows * num_coulumns;
	printf("Number of row=%d\n", num_rows);
	printf("Number of columns=%d\n", num_coulumns);
	printf("Number of elements=%d\n", num_of_elements);
	printf("1st row:\n");
	printf("Array[0][0]=%d\n", Array[0][0]);
	printf("Array[0][1]=%d\n", Array[0][1]);
	printf("Array[0][2]=%d\n", Array[0][2]);
	printf("2nd row:\n");
	printf("Array[1][0]=%d\n", Array[1][0]);
	printf("Array[1][1]=%d\n", Array[1][1]);
	printf("Array[1][2]=%d\n", Array[1][2]);
	printf("3nd row:\n");
	printf("Array[2][0]=%d\n", Array[2][0]);
	printf("Array[2][1]=%d\n", Array[2][1]);
	printf("Array[2][2]=%d\n", Array[2][2]);
	printf("4nd row:\n");
	printf("Array[3][0]=%d\n", Array[3][0]);
	printf("Array[3][1]=%d\n", Array[3][1]);
	printf("Array[3][2]=%d\n", Array[3][2]);
	printf("5nd row:\n");
	printf("Array[4][0]=%d\n", Array[4][0]);
	printf("Array[4][1]=%d\n", Array[4][1]);
	printf("Array[4][2]=%d\n", Array[4][2]);
	return(0);
}