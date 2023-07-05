#include<stdio.h>
#define MAX_STRING_LENGTH 512
int main()
{
	int strlen(char[]);
	char Array[3][10];
	int num_rows, num_col, num_ele,array_size,i;
	array_size = sizeof(Array);
	num_rows = array_size / sizeof(Array[0]);
	num_col = sizeof(Array[0]) / sizeof(char);
	num_ele = num_rows * num_col;
	Array[0][0] = 'A';
	Array[0][1] = 'B';
	Array[0][2] = '\0';
	

	Array[1][0] = 'W';
	Array[1][1] = 'R';
	Array[1][2] = '\0';

	Array[2][0] = 'S';
	Array[2][1] = 'H';
	Array[2][2] = 'I';
	Array[2][3] = 'V';
	Array[2][4] = 'A';
	Array[2][5] = 'N';
	Array[2][6] = 'J';
	Array[2][7] = 'A';
	Array[2][8] = 'L';
	Array[2][9] = 'I';
	Array[2][10] = '\0';



		printf("Elements in 2D array is:\n");
	for (i = 0; i < num_rows; i++)
		printf("%s\n", Array[i]);
	return(0);
}
int Mystrlen(char str[])
{
	int j;
	int stringlength = 0;
	for (j = 0; j < MAX_STRING_LENGTH; j++)
	{
		if (str[j] == '\0')
			break;
		else
			stringlength++;

	}
	return(stringlength);
}