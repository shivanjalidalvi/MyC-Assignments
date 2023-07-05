#include<stdio.h>
int main(int argc,char* argv[],char* envp[])
{
	int i;
	if (argc != 4)
	{
		printf("Invalid entry");
		printf("Usage:cammandlineargument<firstName><MiddleName><Surname>\n\n");
		exit(0);
	}
	printf("Enter full name\n");
	for (i = 1; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	return(0);
}