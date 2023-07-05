#include<stdio.h>
int main()
{
	void PrintBinaryFormOfNumber(unsigned int);
	unsigned int a, result;
	printf("Enter the value of a:\n");
	scanf("%u", &a);

	result = ~a;
	printf("Once complement of a=%u is result=%u\n", a, result);

	PrintBinaryFormOfNumber(a);
	PrintBinaryFormOfNumber(result);

	return(0);
}
void PrintBinaryFormOfNumber(unsigned int decimal_num)
{
	unsigned int quationt, remainde, num, i;
	unsigned int binary[8];

	num = decimal_num;
	for (i = 0; i < 8; i++)
			binary[i] = 0;
		//printf("binary form of num %u\n", decimal_num);
		num = decimal_num;
	
		i = 7;
		while (num != 0)
		{
			quationt = num / 2;
			remainde = num % 2;
			binary[i] = remainde;
			num = quationt;
			i--;
		}
		for (i = 0; i < 8; i++)
		{
			printf("%u\t", binary[i]);
		}
	
	printf("\n\n");
}