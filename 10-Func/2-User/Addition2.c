#include<stdio.h>
int main()
{
	int result;
	int Add(void);
	result = Add();
	printf("Sum=%d", result);
	return(0);
}
int Add(void)
{
	int a, b, sum;
	printf("Enter the value of a:\n");
	scanf("%d", &a);
	printf("Enter the value of b:\n");
	scanf("%d", &b);
	sum = a + b;
	return(sum);
}