#include<stdio.h>
#define MAX_STRING_LENGTH 512
int main()
{
	int strlen(char[]);
	char Array[10][15] = { "ubun","csind","eE","REDS","rq","ecfqd","tvc","gtrfedxs","ytred","ed" };
	int i, j, num_rows, num_columns, num_elements, actual_elements = 0;
	int Array_size;
	Array_size = sizeof(Array);
	num_rows = Array_size / sizeof(Array[0]);
	num_columns = sizeof(Array[0]) / sizeof(char);
	num_elements = num_columns * num_rows;
	int Stringlength[10];
	for (i = 0; i < num_rows; i++)
		actual_elements = actual_elements + strlen(Array[i]);
	printf("%s\n", Array[0]);
	printf("%s\n", Array[1]);
	printf("%s\n", Array[2]);
	printf("%s\n", Array[3]);
	printf("%s\n", Array[4]);
	printf("%s\n", Array[5]);
	printf("%s\n", Array[6]);
	printf("%s\n", Array[7]);
	printf("%s\n", Array[8]);
	printf("%s\n", Array[9]);
	return(0);
}