#include<stdio.h>
#include<string.h>
#define MAX_STRING_LENGTH 512
int main()
{
	char original[MAX_STRING_LENGTH], rev[MAX_STRING_LENGTH];
	printf("Enter string:\n");
	gets_s(original, MAX_STRING_LENGTH);
	printf("Original string=%s\n", original);
	printf("reversed string=%s\n", strrev(original));
	return(0);
}