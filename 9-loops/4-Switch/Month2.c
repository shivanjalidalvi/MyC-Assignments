#include<stdio.h>
int main()
{
	int num;
	printf("Enter num of month:\n");
	scanf("%d", &num);
	if (num == 1)
		printf("Month num %d is January\n", num);
	else if (num == 2)
		printf("Month num %d is Febraury\n", num);
	else if (num == 3)
		printf("Month num %d is March\n", num);
	else if (num == 4)
		printf("Month num %d is April\n", num);
	else if (num == 5)
		printf("Month num %d is May\n", num);
	else if (num == 6)
		printf("Month num %d is June\n", num);
	else if (num == 7)
		printf("Month num %d is July\n", num);
	else if (num == 8)
		printf("Month num %d is August\n", num);
	else if (num == 9)
		printf("Month num %d is September\n", num);
	else if (num == 10)
		printf("Month num %d is October\n", num);
	else if (num == 11)
		printf("Month num %d is November\n", num);
	else if (num == 12)
		printf("Month num %d is December\n", num);
	else
		printf("Invalid entry");
	return(0);
}