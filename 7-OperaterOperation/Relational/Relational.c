#include<stdio.h>
int main()
{
	int a, b, result;
	printf("Enter the value of a:\n");
	scanf("%d", &a);
	printf("Enter the value of b:\n");
	scanf("%d", &b);

	result = (a > b);
	printf("a=%d is greater than b=%d result=%d\n", a, b, result);

	result = (a < b);
	printf("a=%d is less than b=%d result=%d\n", a, b, result);

	result = (a == b);
	printf("a=%d is equal than b=%d result=%d\n", a, b, result);

	result = (a != b);
	printf("a=%d is not equal than b=%d result=%d\n", a, b, result);

	result = (a >= b);
	printf("a=%d is greater than and equal b=%d result=%d\n", a, b, result);

	result = (a <= b);
	printf("a=%d is less than and equal b=%d result=%d\n", a, b, result);

	return(0);
}