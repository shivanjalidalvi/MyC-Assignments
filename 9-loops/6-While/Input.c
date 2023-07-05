#include<stdio.h>
int main()
{
	int num, i_num,i;
	printf("Enter the value of num:\n");
	scanf("%d", &num);
	printf("Enter the value of i_num:\n");
	scanf("%d", &i_num);
	printf("Printinf number from %d to %d\n", i_num, (i_num + num));
	i = i_num;
	while (i < (i_num + num))
	{
		printf("%d\n", i);
		i++;
	}
	return(0);
}