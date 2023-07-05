#include<stdio.h>
int main()
{
	float f;
	float float_num=1.0f;
	printf("Printing number from %f to %f\n", float_num, (float_num*10));
	for (f = float_num; f <= (float_num * 10); f = f + float_num)
	{
		printf("%f\n", f);
	}
	return(0);
}