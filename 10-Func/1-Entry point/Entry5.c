#include<stdio.h>
int main(int argc, char* argv[], char* envp[])
{
	int i;
	printf("Number of cammand line=%d\n", argc);
	for (i = 0; i < argc; i++)
	{
		printf("Cammand line number %d=%s\n", (i + 1), argv[i]);
	}
	printf("Number of environmental variable:\n");
	for (i = 0; i < 20; i++)
	{
		printf("Number of envp %d=%s\n", (i + 1), envp[i]);
	}
	return(0);
}