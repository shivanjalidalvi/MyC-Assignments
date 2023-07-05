#include<stdio.h>
int main()
{
	unsigned int a;
	void Recursive(unsigned int);
	printf("Enter value of a:\n");
	scanf("%u", &a);
	printf("Recursive number=%u\n", a);
	Recursive(a);
	return(0);
}
void Recursive(unsigned int n)
{
	printf("n=%u\n", n);
	if (n > 0)
		Recursive(n - 1);
}