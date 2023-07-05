#include<stdio.h>
int main()
{
	int i;
	char ch;
	printf("User control loop:\n");
	printf("Enter 'Q' or 'q' to quit:\n");
	for (i = 1; i < 100; i++)
	{
		ch = getch();
		if (ch == 'Q' || ch == 'q')
			break;
	}
	printf("Exiting loop\n");
	return(0);

}