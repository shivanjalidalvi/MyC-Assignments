#include<stdio.h>
int main()
{
	char option, ch='\0';
	printf("Enter 'Q' or 'q' to quit:\n");
	printf("Enter 'Y' or 'y' to enter into user control loop:\n");
	option = getch();
	if (option == 'Y' || option == 'y')
	{
		printf("In loop....................\n");
		while (1)
		{
			ch = getch();
			if (ch == 'Q' || ch == 'q')
				break;
		}
	}
	return(0);
}