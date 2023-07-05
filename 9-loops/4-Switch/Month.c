#include<stdio.h>
int main()
{
	int month_num;
	printf("Enter month num:\n");
	scanf("%d", &month_num);
	switch (month_num)
	{
	case 1:
		printf("Month number %d is January\n", month_num);
		break;
	case 2:
		printf("Month number %d is Febraury\n", month_num);
		break;
	case 3:
		printf("Month number %d is March\n", month_num);
		break;
	case 4:
		printf("Month number %d is April\n", month_num);
		break;
	case 5:
		printf("Month number %d is May\n", month_num);
		break;
	case 6:
		printf("Month number %d is June\n", month_num);
		break;
	case 7:
		printf("Month number %d is July\n", month_num);
		break;
	case 8:
		printf("Month number %d if August\n", month_num);
		break;
	case 9:
		printf("Month number %d if September\n", month_num);
		break;
	case 10:
		printf("Month number %d is October\n", month_num);
		break;
	case 11:
		printf("Month number %d is November\n", month_num);
		break;
	case 12:
		printf("Month number %d is December\n", month_num);
		break;
	default:
		break;
	}
	return(0);
}