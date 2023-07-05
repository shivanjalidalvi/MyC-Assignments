#include<stdio.h>
int main()
{
	int Add(int, int);
	int a, b, result;
	printf("Enter a:\n");
	scanf("%d", &a);
	printf("Enter b:\n");
	scanf("%d", &b);
	result = Add(a, b);
	printf("Sum=%d", result);
	return(0);
}
int Add(int a, int b)
{
	int sum;
	sum = a + b;
	return(sum);
}