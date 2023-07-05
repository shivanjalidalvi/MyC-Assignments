#include<stdio.h>
int main()
{
	char option, ch = '\0';
	do
	{
		do
		{
			printf("In loop......\n");
			ch = getch();
		} while (ch != 'Q' & ch != 'q');
		printf("Exiting loop\n");
		printf("Enter 'Y' or 'y' to user control loop\n");
		option = getch();
	} while (option == 'Y' || option == 'y');
	printf("\n\n");
	return(0);	
}