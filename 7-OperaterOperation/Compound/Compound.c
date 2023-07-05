#include<stdio.h>
int main()
{
	int a;
	int b;
	

	printf("Enter the value of a:\n");
	scanf("%d", &a);
	printf("Enter the value of b:\n");
	scanf("%d", &b);

	a +=b;
	printf("Addtion of a &b=%d\n", a, b, a);

	a -= b;
	printf("Substraction of a &b=%d\n", a, b, a);

	a *= b;
	printf("Multiplication of a &b=%d\n", a, b, a);

	a /= b;
	printf("Division of a &b=%d\n", a, b, a);

	a %= b;
	printf("Addtion of a &b=%d\n", a, b, a);
	return(0);

}