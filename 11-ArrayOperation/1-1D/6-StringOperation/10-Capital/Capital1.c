#include<stdio.h>
#include<ctype.h>
#define MAX_STRING_LENGTH 512
int main()
{
	int Strlen(char[]);
	int i, j, stringlength = 0;
	char Original[MAX_STRING_LENGTH], Capital[MAX_STRING_LENGTH];
	printf("Enter string:\n");
	gets_s(Original, MAX_STRING_LENGTH);
	stringlength = Strlen(Original);
	for (i = 0, j = 0; i < stringlength; i++)
	{
		if (i == 0)
		{
			Capital[j] = toupper(Original[i]);
		}
		else if (Original[i] == ' ')
		{
			Capital[j] = Original[i];
			Capital[j + 1] = toupper(Original[i + 1]);
			j++;
			i++;
		}
		else
		{
			Capital[j] = Original[i];
		}
		j++;
		Capital[j] = '\0';
	}
	printf("String entered by you=%s\n", Original);
	printf("String After Capitalization=%s\n", Capital);
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