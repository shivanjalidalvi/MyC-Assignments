#include<stdio.h>
int main()
{
	int i = 9;
	printf("Decimal value of 'i'=%d\n", i);
	printf("Octadecimal value of 'i'=%o\n", i);
	printf("Hexadecimal value of 'i'(Lower)=%x\n", i);
	printf("Hexadecimal value of'i'(Upper)=%X\n", i);

	float f = 1.34f;
	printf("Value of 'f' in %%f=%f\n", f);
	printf("Value of 'f' in %%4.2f=%4.2f\n", f);
	printf("Value of 'f' in %%6.2f=%6.2f\n", f);

	char c = 'A';
	printf("Value of 'c'=%c\n", c);
	char str[] = "shivanjali";
	printf("Value of 'str[]'=%s\n", str);

	long num = 126543222;
	printf("Value of 'num'=%ld\n", num);

	unsigned int a = 23;
	printf("Value of 'a'=%u\n", a);

	double d = 1.3154356789;
	printf("Value with out exponential 'd'=%g\n", d);
	printf("With exponential (lower) 'd'=%e\n", d);
	printf("With exponential(upper) 'd'=%E\n", d);
	printf("Hexadecimal (lower) 'd'=%a\n", d);
	printf("Hexadecimal (upper) 'd'=%A\n", d);

	return(0);
}