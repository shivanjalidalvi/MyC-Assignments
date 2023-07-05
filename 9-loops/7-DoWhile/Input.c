#include<stdio.h>
int main()
{
	int num, i_num,i;
	printf("Enter the value of num:\n");
	scanf("%d", &num);
	printf("Enter the value of i_num:\n");
	scanf("%d", &i_num);
	printf("Printing number from %d to %d\n", i_num, (i_num + num));
	i = i_num;
	do
	{
		printf("%d\n", i);
		i++;
	} while (i <= (i_num + num));
	return(0);

}