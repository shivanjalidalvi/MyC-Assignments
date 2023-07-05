#include<stdio.h>
#define MAX_STRING_LENGTH 512
int main()
{
	void Strcpy(char[], char[]);
	int num_rows, num_columns, num_elements, i, j;
	char Array[5][10];
	int Array_size;
	Array_size = sizeof(Array);
	num_rows = Array_size / sizeof(Array[0]);
	printf("Number of rows=%d\n", num_rows);
	num_columns = sizeof(Array[0]) / sizeof(char);
	printf("Number of columns=%d\n", num_columns);
	num_elements = num_rows * num_columns;
	printf("Number of elements=%d\n", num_elements);

	Strcpy(Array[0], "My");
	Strcpy(Array[1], "name");
	Strcpy(Array[2], "is");
	Strcpy(Array[3], "Shivanjali");
	Strcpy(Array[4], "Kalokhe");

	printf("2D elements:\n");
	for (i = 0; i < num_rows; i++)
	   printf("Array[%d]=%s\n",i, Array[i]);
	
	return(0);
}
void Strcpy(char destination[], char source[])
{
	int Strlen(char[]);
	int i, j,stringlength=0;
	stringlength = Strlen(source);
	for (i = 0; i < stringlength; i++)
	{
		destination[i] = source[i];
	}
	destination[i] = '\0';
}
int Strlen(char str[])
{
	int j, stringlength = 0;
	for (j = 0; j < MAX_STRING_LENGTH; j++)
	{
		if (str[j] == '\0')
			break;
		else
			stringlength++;
	}
	return(stringlength);
}