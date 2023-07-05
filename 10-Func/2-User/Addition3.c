#include<stdio.h>
int main()
{
	void Add(int, int);
	int a, b;
	printf("Enter the value of a:\n");
	scanf("%d", &a);
	printf("Enter the value of b:\n");
	scanf("%d", &b);
	Add(a,b);
	return(0);
}
void Add(int a, int b)
{
	int sum;
	sum = a + b;
	printf("Sum=%d", sum);
}