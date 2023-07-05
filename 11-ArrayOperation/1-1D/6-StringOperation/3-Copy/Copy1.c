#include<stdio.h>
#define MAX_STRING_LENGTH 512
int main()
{
	char original[MAX_STRING_LENGTH], copy[MAX_STRING_LENGTH];
	printf("Enter string:\n");
	gets_s(original, MAX_STRING_LENGTH);
	printf("String entered by you:=%s\n", original);
	strcpy(copy, original);
	printf("String copied=%s\n", copy);
	return(0);
}