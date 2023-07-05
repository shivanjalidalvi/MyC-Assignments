#include<stdio.h>
#define MAX_STRING_LENGTH 512
int main()
{
	void StrCpy(char[], char[]);
	int stringlength = 0;
	char Original[MAX_STRING_LENGTH], Copy[MAX_STRING_LENGTH];
	printf("Enter string:\n");
	gets_s(Original, MAX_STRING_LENGTH);
	printf("String entered by you=%s\n", Original);
	StrCpy(Copy, Original);
	printf("String copied=%s\n", Copy);
	printf("Length of string=%d\n", stringlength);
	return(0);
}
void StrCpy(char destination[], char source[])
{
	int Strlen(char[]);
	int i;
	int i_Stringlength = 0;
	i_Stringlength = Strlen(source);
	for (i = 0; i < i_Stringlength; i++)
		destination[i] = source[i];
	destination[i] = '\0';
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