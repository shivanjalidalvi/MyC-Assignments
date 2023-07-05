#include<stdio.h>
int main()
{
	int i_num, num, i;
	printf("Enter the value of num:\n");
	scanf("%d", &num);
	printf("Enter the vlaue of i_num:\n");
	scanf("%d", &i_num);
	printf("Printing number from %d to %d\n", i_num, (i_num + num));
	for (i = i_num; i < (i_num + num); i++)
	{
		printf("%d\n", i);
	}
	return(0);
}