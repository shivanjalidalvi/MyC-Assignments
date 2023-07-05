#include<stdio.h>
#include<string.h>
#define MAX_STRING_LENGTH 512
int main()
{
	void StrRev(char[], char[]);
	char Original[MAX_STRING_LENGTH],Rev[MAX_STRING_LENGTH];
	printf("Enter string:\n");
	gets_s(Original, MAX_STRING_LENGTH);
	printf("String Entered by you=%s\n", Original);
	StrRev(Rev,Original);
	printf("Reversed string=%s", Rev);
	return(0);
}
void StrRev(char destination[], char source[])
{
	int stringlength = 0;
	int Strlen(char[]);
	int j,i,len;
	stringlength = Strlen(source);
	len = stringlength - 1;
	for (i = 0, j = len; i < stringlength, j >= 0; i++, j--)
		destination[i] = source[j];
	destination[i] = '\0';
}
int Strlen(char str[])
{
	int i_stringlength = 0;
	int j;
	for (j = 0; j < MAX_STRING_LENGTH; j++)
	{
		if (str[j] == '\0')
			break;
		else
			i_stringlength++;
	}

	return(i_stringlength);
}
