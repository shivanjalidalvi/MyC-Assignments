#include<stdio.h>
int main(int argc, char* argv[], char* envp[])
{
	void Addition(void);

	Addition();
	return(0);
}
void Addition(void)
{
	int a, b,sum;
	printf("Enter the value of a:\n");
	scanf("%d", &a);
	printf("Enter the value of b:\n");
	scanf("%d", &b);
	sum = a + b;
	printf("Addition =%d", sum);
}