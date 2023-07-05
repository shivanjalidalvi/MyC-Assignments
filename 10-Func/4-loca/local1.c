#include<stdio.h>
int main()
{
	int a = 5;
	void Count(void);
	printf("A=%d", a);
	Count();
	Count();
	Count();
	return(0);
}
void Count(void)
{
	int local_count = 0;
	local_count = local_count + 1;
	printf("Local+count=%d\n", local_count);
}