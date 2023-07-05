#include<stdio.h>
#include<string.h>
#define MAX_STRING_LENGTH 512
int main()
{
	char First[MAX_STRING_LENGTH], Second[MAX_STRING_LENGTH];
	printf("Enter string:\n");
	gets_s(First, MAX_STRING_LENGTH);
	printf("Enter 2nd strng:\n");
	gets_s(Second, MAX_STRING_LENGTH);
	printf("First string=%s\n", First);
	printf("second string=%s\n", Second);
	strcat(First, Second);
	printf("1st after concat=%s", First);
	printf("2nd after concat=%s", Second);
	return(0);
}