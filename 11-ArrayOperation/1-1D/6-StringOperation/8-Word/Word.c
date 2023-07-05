#include<stdio.h>
#define MAX_STRING_LENGTH 512
int main()
{
	int Strlen(char[]);
	int i, stringlength = 0;
	char Array[MAX_STRING_LENGTH];
	int space_count = 0, word_count = 0;
	printf("Enter string:\n");
	gets_s(Array, MAX_STRING_LENGTH);
	stringlength = Strlen(Array);
	for (i = 0; i < stringlength; i++)
	{
		switch (Array[i])
		{
		case 32:
			space_count++;
		default:
			break;
		}
	}
	word_count = space_count + 1;

	printf("String you have entered=%s\n", Array);
	printf("Number os spaces=%d\n", space_count);
	printf("Nuber of words=%d\n", word_count);
	return(0);
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