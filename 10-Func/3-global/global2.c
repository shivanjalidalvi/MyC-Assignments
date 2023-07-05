#include<stdio.h>
int main()
{
	void Count(void);
	extern int global_count;
	printf("Before=%d\n", global_count);
	Count();
	printf("After =%d\n", global_count);
	return(0);
}
int global_count = 0;
void Count(void)
{
	global_count = 5;
	printf("global_count=%d\n", global_count);
}