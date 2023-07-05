#include<stdio.h>
#define MAX_STRING_LENGTH 512
int main()
{
	int strlen(char[]);
	int num_rows, Array_size;
	char Array[10][15] = { "hi","how","are","you","and","whats","dew","ew","WDC","MOE"};
	Array_size = sizeof(Array);
	num_rows = Array_size / sizeof(Array[0]);
	int stringlength[10], i, j;
	for (i = 0; i < num_rows; i++)
		stringlength[i] = strlen(Array[i]);
	for (i = 0; i < num_rows; i++)
		printf("%s\n", Array[i]);
	for (i = 0; i < num_rows; i++)
	{
		printf("string number %d=%s\n", (i + 1), Array[i]);
		for (j = 0; j < stringlength[i]; j++)
		{
			printf("character %d=%c\n", (j + 1), Array[i][j]);
		}

	}
	return(0);
}
int strlen(char str[])
{
	int j, stringlength = 0;
	for (j = 0; j < stringlength; j++)
	{
		if (str[j] == '\0')
			break;
		else
			stringlength++;
	}
	return(stringlength);
}