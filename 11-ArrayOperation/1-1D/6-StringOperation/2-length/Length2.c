#include<stdio.h>
#define MAX_STRING_LENGTH 512
int main()
{
	int Strlen(char[]);
	int stringlength = 0;
	char c_Array[MAX_STRING_LENGTH];
	printf("Enter string:\n");
	gets_s(c_Array, MAX_STRING_LENGTH);
	printf("String entered by you=%s\n", c_Array);
	stringlength = Strlen(c_Array);
	printf("Stringlength=%d\n", stringlength);
	return(0);
}
int Strlen(char str[])
{
	int stringlength = 0;
	int j;
	for (j = 0; j < MAX_STRING_LENGTH; j++)
	{
		if (str[j] == '\0')
			break;
		else
			stringlength++;

	}
	return(stringlength);
}