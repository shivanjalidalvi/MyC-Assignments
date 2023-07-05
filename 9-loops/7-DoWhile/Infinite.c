#include<stdio.h>
int main()
{
	char option, ch = '\0';
	printf("Enter 'Q' or 'q' to quit\n");
	printf("Enter 'Y' or 'y' to enter loop\n");
	option = getch();
	if (option == 'Y' || option == 'y')
	{
		do
		{
			printf("In loop............\n");
			ch = getch();
			if (ch == 'Q' || ch == 'q')
				break;


		} while (1);
		printf("Exiting loop\n", ch);
	}
	else
	{
		printf("enter 'Y' or 'y' to enter in loop\n", option);
	}
	return(0);
}