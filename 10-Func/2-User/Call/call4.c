#include<stdio.h>
int main()
{
	int Add(int, int);
	int a, b, c, d, result;
	a = 10;
	b = 20;
	c = 30;
	d = 40;

	result = Add(Add(a, b), Add(c, d));
	printf("Addition of %d %d %d %d =%d\n", a, b, c, d, result);
	return(0);
}
int Add(int a, int b)
{
	int sum;
	sum = a + b;
	return(sum);
}