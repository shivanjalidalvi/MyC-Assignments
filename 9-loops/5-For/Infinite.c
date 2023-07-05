#include<stdio.h>
int main()
{
	char option,ch;
	printf("user control loop");
	printf("Enter 'Q' or 'q' to quit:\n");
	option = getch();
	if (option == 'Y' || option == 'y')
	{
		for (;;)
		{
			ch = option;
			printf("Enter in to user control infinite loop:\n");
			if (ch == 'Q' || ch == 'q')
				break;
		}
	}
	printf("Exit loop\n");
	return(0);
}