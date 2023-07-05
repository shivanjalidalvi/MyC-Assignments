#include<stdio.h>
#include<string.h>
#define MAX_STRING_LENGTH 512
int main()
{
	char First[MAX_STRING_LENGTH], Second[MAX_STRING_LENGTH];
	void StrCat(char[], char[]);
	printf("Enter 1st string\n");
	gets_s(First, MAX_STRING_LENGTH);
	printf("Enter 2st string\n");
	gets_s(Second, MAX_STRING_LENGTH);
	printf("Before:\n");
	printf("First string=%s\n", First);
	printf("Second string=%s\n", Second);
	StrCat(First, Second);
	printf("After:\n");
	printf("First string=%s\n", First);
	printf("Second string=%s\n", Second);

	return(0);
}
void StrCat(char destination[], char source[])
{
	int Stringlength_destination = 0,Stringlength_source=0;
	int Strlen(char[]);
	int i, j;
	Stringlength_destination = Strlen(destination);
	Stringlength_source = Strlen(source);
	for (i = Stringlength_destination, j = 0; j < Stringlength_source; i++, j++)
	{
		destination[i] = source[j];
	}
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