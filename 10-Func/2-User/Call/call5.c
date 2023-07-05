#include<stdio.h>
int main()
{
	int Add(int, int);
	int a, b;
	a = 10;
	b = 20;
	printf("Adiition of %d+%d =%d\n", a, b, Add(a, b));
	return(0);
}
int Add(int a, int b)
{
	int MyAdd(int, int);
	return(MyAdd(a, b));
}
int MyAdd(int x, int y)
{
	int sum;
	sum = x + y;
	return(sum);
}