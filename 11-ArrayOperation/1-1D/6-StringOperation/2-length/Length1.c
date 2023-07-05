#include<stdio.h>
#define MAX_STRING_LENGTH 512
int main()
{
	char c_Array[MAX_STRING_LENGTH];
	//int Strlen(char);
	int stringlength = 0;
	int i;
	printf("Enter the string:\n");
	gets_s(c_Array, MAX_STRING_LENGTH);
	printf("String enterd by you=%s\n", c_Array);
	stringlength = strlen(c_Array);
	printf("Length of string=%d\n", stringlength);
	return(0);


}