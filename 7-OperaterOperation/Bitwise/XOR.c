#include<stdio.h>
int main()
{
	void PrintBinaryFormOfNumber(unsigned int);

	unsigned int a, b, result;

	printf("Enter the vakue of a:\n");
	scanf("%d", &a);
	printf("Enter the value of b:\n");
	scanf("%d", &b);

	result = a ^ b;
	printf("XOR operation of a=%u and b=%u gives result=%u\n", a, b, result);

	PrintBinaryFormOfNumber(a);
	PrintBinaryFormOfNumber(b);
	PrintBinaryFormOfNumber(result);

	return(0);
}
void PrintBinaryFormOfNumber(unsigned int decimal_num)
{
	unsigned quationt, remainder;
	unsigned int num;
	unsigned int binary[8];
	unsigned i;
	printf("Binary form of number %d:\n", decimal_num);
	for (i = 0; i < 8; i++)
		binary[i] = 0;
	num = decimal_num;
	i = 7;
	while (num != 0)
	{
		quationt = num / 2;
		remainder = num % 2;
		binary[i] = remainder;
		num = quationt;
		i--;
	}
	for(i=0;i<8;i++)
	printf("%u\t", binary[i]);

	printf("\n\n");
}