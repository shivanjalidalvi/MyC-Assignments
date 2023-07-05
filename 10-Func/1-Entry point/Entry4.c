#include<stdio.h>
int main(int argc, char* argv[])
{
	int i;
	printf("Number cammand line=%d\n", argc);
	printf("Cammand line in program =%d\n", argc);
	for (i = 0; i < argc; i++)
	{
		printf("Cammand line number %d=%s\n ", (i + 1), argv[i]);
	}
	return(0);
}