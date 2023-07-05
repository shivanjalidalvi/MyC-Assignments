#include<stdio.h>
#define MAX_NUMBER(a,b) ((a>b)?a:b)
int main()
{
	int a, b, result_i;
	float f, g, result_f;
	printf("Enter value of a:\n");
	scanf("%d", &a);
	printf("Enter value of b:\n");
	scanf("%d", &b);
	result_i = MAX_NUMBER(a, b);
	printf("Result of macro int =%d\n", result_i);

	printf("Enter value of f:\n");
	scanf("%f", &f);
	printf("Enter value of g:\n");
	scanf("%f", &g);
	result_f = MAX_NUMBER(f, g);
	printf("Result of macro float =%f\n", result_f);

	return(0);

}
