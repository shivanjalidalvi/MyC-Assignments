#include<stdio.h>
#define MAX_STRING_LENGTH 512
int main()
{
	char ch[MAX_STRING_LENGTH];
	printf("Enter string:\n");
	gets_s(ch, MAX_STRING_LENGTH);
	printf("String entered by you=%s\n", ch);
	return(0);
}