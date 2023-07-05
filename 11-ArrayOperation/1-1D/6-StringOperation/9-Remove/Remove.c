#include<stdio.h>
#define MAX_STRING_LENGTH 512
int main()
{
	int Strlen(char[]);
	int i, j, stringlength = 0;
	char Original[MAX_STRING_LENGTH], Removed[MAX_STRING_LENGTH];
	printf("Enter string:\n");
	gets_s(Original, MAX_STRING_LENGTH);
	stringlength = Strlen(Removed);
	for (i = 0, j = 0; i < stringlength; i++)
	{
		if (Original[i] == ' ')
			continue;
		else
			Removed[j] = Original[i];
		j++;
	}
	printf("String entered by you=%s\n", Original);
	printf("String after removing space=%s\n", Removed);
	return(0);
}
int Strlen(char str[])
{
	int j, stringlength = 0;
	for (j = 0; j < MAX_STRING_LENGTH; j++)
	{
		if (str[j] = '\0')
			break;
		else
			stringlength++;
	}
	return(stringlength);
}