#include<stdio.h>

#define MY_PI 3.14151672
#define AMC_STRING "ASTROMEDICOM"

enum Days
{
	Sunday,
	Monday,
	Tuesday,
	Wednesday,
	Thrusday,
	Friday,
	Saturday
};
enum Months
{
	January=1,
	Febraury,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	Ocotber,
	November,
	December
};

enum Booloen
{
	True=1,
	False=0
};
int main()
{
	const double epsilon = 0.000001;
	printf("Value of epsilon=%lf\n", epsilon);

	printf("Sunday is day number=%d", Sunday);
	printf("Monday is day number=%d", Monday);
	printf("Tuesday is day number=%d", Tuesday);
	printf("Wednessday is day number=%d", Wednesday);
	printf("Thrusday is day number=%d", Thrusday);
	printf("Friday is day number=%d", Friday);
	printf("Saturday is day number=%d", Saturday);

	printf("January is month number=%d", January);
	printf("Febraury is month number=%d", Febraury);
	printf("March is month number=%d", March);
	printf("April is month number=%d", April);
	printf("May is month number=%d", May);
	printf("June is month number=%d", June);
	printf("July is month number=%d", July);
	printf("August is month number=%d", August);
	printf("September is month number=%d", September);
	printf("October is month number=%d", Ocotber);
	printf("November is month number=%d", November);
	printf("December is month number=%d", December);

	printf("True  number=%d", True);
	printf("False number=%d", False);

	printf("Area of cirle=%f", (MY_PI * 2.0 * 2.0));
	printf("Amc_string=%s\n", AMC_STRING);
	return(0);
}