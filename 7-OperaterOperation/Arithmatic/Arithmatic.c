#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	printf("Enter the value of a:\n");
	scanf("%d", &a);
	printf("Enter the value of b:\n");
	scanf("%d", &b);

	c = a + b;
	printf("Addition of a & b=%d\n", c, b, a);

	c = a - b;
	printf("Substraction of a & b=%d\n", c, b, a);

	c = a/b;
	printf("Division of a & b=%d\n", c, b, a);

	c = a * b;
	printf("Multiplication of a & b=%d\n", c, b, a);

	c = a % b;
	printf("Remainder of a & b=%d\n", c, b, a);

	return(0);
}