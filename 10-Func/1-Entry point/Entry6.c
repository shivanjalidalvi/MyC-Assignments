#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main(int argc, char* argv[], char* envp[])
{
	int i, num, sum = 0;
	if (argc == 1)
	{
		printf("No number is given to addition:\n");
		printf("Number od argument passsed=%d\n", argc);
		exit(0);
	}
	printf("Printing numbers:\n");
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		sum = sum + num;
	}
	printf("Sum=%d\n", sum);
	return(0);
}