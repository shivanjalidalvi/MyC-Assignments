#include<stdio.h>
int main()
{
	int a, b, c,result;
	printf("Enter the value of a:\n");
	scanf("%d", &a);
	printf("Enter the value of b:\n");
	scanf("%d", &b);
	printf("Enter the value of c:\n");
	scanf("%d", &c);

	result = (a <= b) && (b != c);
	printf("A=%d is less than b=%d and b=%d is not equal to c=%d so result=%d\n",a, b, b, c,result);

	result = (a <= b) || (a == c);
	printf("A=%d is greater than b=%d and a=%d is  equal to c=%d so result=%d\n", a, b, b, c, result);

	result = !a;
	printf("Using NOT operation on a=%d gives result=%d\n", a, result);

	result = !b;
	printf("Using NOT operation on b=%d gives result=%d\n", b, result);

	result = !c;
	printf("Using NOT operation on c=%d gives result=%d\n", c, result);

	result =(! (a <= b) && !(b != c));
	printf("Using NOT OPERATOR on equation A=%d is less than b=%d and b=%d is not equal to c=%d so result=%d\n", a, b, b, c, result);

	result = (!(a <= b) || !(a == c));
	printf("Using NOT OPERATION on equation A=%d is greater than b=%d and a=%d is  equal to c=%d so result=%d\n", a, b, b, c, result);

	return(0);
}