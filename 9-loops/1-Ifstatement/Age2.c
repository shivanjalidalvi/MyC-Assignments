#include<stdio.h>
int main()
{
	int age;
	printf("Enter Age:\n");
	scanf("%d", &age);
	if (age >= 18)
	{
		printf("Eligible for voting\n");
	}
	printf("Not eligibe for voting\n");
	return(0);
}