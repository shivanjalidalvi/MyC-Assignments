#include<stdio.h>
int main()
{
	void BinaryNumber(unsigned int);
	unsigned int a, num_bits, result;
	printf("Enter the value of a:\n");
	scanf("%u", &a);
	printf("Enter how much bit to shift\n");
	scanf("%u", &num_bits);
	result = a << num_bits;
	printf("Value a=%u is shifted to left by num_bits=%u gives result=%u\n", a, num_bits, result);

	BinaryNumber(a);
	BinaryNumber(num_bits);
	BinaryNumber(result);

	return(0);

}
void BinaryNumber(unsigned int decimal_num)
{
	unsigned int quationt, remainder, num, i;
	unsigned int binary[8];
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
	for (i = 0; i < 8; i++)
		printf("%u\t", binary[i]);
	printf("\n\n");
}