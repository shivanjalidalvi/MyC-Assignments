#include<stdio.h>
#define MAX_STRING_LENGTH 512
int main()
{
	int Strlen(char[]);
	void Strcpy(char[], char[]);
	int Stringlength = 0,i;
	char Original[MAX_STRING_LENGTH], Replace[MAX_STRING_LENGTH];
	printf("Enter string:\n");
	gets_s(Original, MAX_STRING_LENGTH);
	Strcpy(Replace, Original);
	Stringlength = Strlen(Replace);
	for (i = 0; i < Stringlength; i++)
	{
		switch (Replace[i])
		{
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
			Replace[i] = ' * ';
			break;
		default:
			break;
		}
	}
	printf("String entered by you=%s\n", Original);
	printf("After replacement=%s\n", Replace);
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
void Strcpy(char destination[], char source[])
{
	int Strlen(char[]);
	int i, stringlength = 0;
	stringlength = Strlen(source);
	for (i = 0; i < stringlength; i++)
		destination[i] = source[i];
	destination[i] = '\0';
}
