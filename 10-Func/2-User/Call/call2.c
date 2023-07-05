#include<stdio.h>
int main()
{
	void Information(void);
	void Country(void);

	Information();
	Country();
	return(0);
}
void Information(void)
{
	void My(void);
	void Name(void);
	void Is(void);
	void FirstName(void);
	void MiddleName(void);
	void LastName(void);

	My();
	Name();
	Is();
	FirstName();
	MiddleName();
	LastName();
}
void My(void)
{
	printf("My  ");
}
void Name(void)
{
	printf("Name  ");
}
void Is(void)
{
	printf("Is  ");
}
void FirstName(void)
{
	printf("Shivanjali  ");
}
void MiddleName(void)
{
	printf("Nitin  ");
}
void LastName(void)
{
	printf("Kalokhe \n");
}
void Country(void)
{
	printf("I Live in India");
}