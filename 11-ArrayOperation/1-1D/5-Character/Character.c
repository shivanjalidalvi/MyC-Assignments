#include<stdio.h>
int main()
{
	char c_Array1[] = { 'A','S','T','R','O','M','E','D','I','C','O','M' };
	char c_Array2[9] = { 'W','E','L','C','O','M','E' };
	char c_Array3[] = {'Y','o','u'};
	char c_Array4[] = "To";
	char c_Array5[] = "RTR BATCH";
	char Array_without_Termination[] = { 'H','E','L','L','O' };
	printf("Size of c_Array1[]=%lu\n", sizeof(c_Array1));
		printf("Size of c_Array2[]=%lu\n", sizeof(c_Array2));
		printf("Size of c_Array3[]=%lu\n", sizeof(c_Array3));
		printf("Size of c_Array4[]=%lu\n", sizeof(c_Array4));
		printf("Size of c_Array5[]=%lu\n", sizeof(c_Array5));
		printf("Size of strings:\n");
		printf("c_Array1[]=%s\n", c_Array1);
		printf("c_Array2[]=%s\n", c_Array2);
		printf("c_Array3[]=%s\n", c_Array3);
		printf("c_Array4[]=%s\n", c_Array4);
		printf("c_Array5[]=%s\n", c_Array5);
		printf("Size of Array_without_Termination=%lu\n", sizeof(Array_without_Termination));
		printf("Array_without_Termination=%s\n", Array_without_Termination);
		return(0);
}