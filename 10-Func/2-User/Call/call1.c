#include<stdio.h>
int main()
{
	void Add(void);
	int Sub(void);
	void Mul(int, int);
	int Div(int, int);

	int Sub_result;
	int a_Mul, b_Mul;
	int a_Div, b_Div, Div_result;

	Add();
	Sub_result=Sub();
	printf("Substraction=%d\n", Sub_result);

	printf("Enter value of A for multiplication:\n");
	scanf("%d", &a_Mul);
	printf("Enter value of B for multiplication:\n");
	scanf("%d", &b_Mul);
	Mul(a_Mul,b_Mul);

	printf("Enter the value of A for Division:\n");
	scanf("%d", &a_Div);
	printf("Enter the value of B for Division:\n");
	scanf("%d", &b_Div);
	Div_result=Div(a_Div,b_Div);
	printf("Division=%d\n", Div_result);

	return(0);
}
void Add(void)
{
	int a, b, c;
	printf("Enter the value of A for addition:\n");
	scanf("%d", &a);
	printf("Enter the value of B for addition:\n");
	scanf("%d", &b);
	c = a + b;
	printf("Addition=%d\n", c);
}
int Sub(void)
{
	int a, b, c;
	printf("Enter the value of A for substraction:\n");
	scanf("%d", &a);
	printf("Enter the value of B for substraction:\n");
	scanf("%d", &b);
	c = a - b;
	return(c);
}
void Mul(int a, int b)
{
	int c;
	c = a * b;
	printf("Multiplication = %d\n", c);
}
int Div(int a, int b)
{
	int c;
	c = a / b;
	return(c);
}