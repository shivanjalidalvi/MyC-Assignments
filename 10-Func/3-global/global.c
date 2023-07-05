#include<stdio.h>
global_count = 0;
int main()
{
	void Count_one(void);
	void Count_two(void);
	void Count_three(void);
	printf("main()=%d\n", global_count);

	Count_one();
	Count_two();
	Count_three();
	return(0);
}
void Count_one(void)
{
	global_count = 100;
	printf("Global_count=%d\n", global_count);
}
void Count_two(void)
{
	global_count = global_count + 1;
	printf("Global_count=%d\n", global_count);

}
void Count_three(void)
{
	global_count = global_count + 10;
	printf("Global_count=%d\n", global_count);

}