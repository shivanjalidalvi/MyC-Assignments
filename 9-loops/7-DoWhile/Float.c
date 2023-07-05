#include<stdio.h>
int main()
{
	float f, f_num = 1.0f;
	printf("Number from %f to %f\n", f_num, (f_num * 10.0f));
	f = f_num;
	do
	{
		printf("%f\n", f);
		f = f+f_num ;
	} while (f<=(f_num*10.0f));
	return(0);
}