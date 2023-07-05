#include<stdio.h>
int main()
{
	float f;
	float f_num=1.0f;
	printf("Printing number from %f to %f:\n",f_num,(f_num*10.0f));
	f = 1.0f;
	while (f <= (f_num * 10.0f))
	{
		printf("%f\n", f);
		f++;
	}
	return(0);
}