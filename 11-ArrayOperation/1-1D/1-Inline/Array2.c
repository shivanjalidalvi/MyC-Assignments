#include<stdio.h>
int main()
{
	int i_Array[] = { 1,2,3,4,5,6,7,8,9,10 };
	int int_size;
	int i_Array_size;
	int i_no_elements;

	float f_Array[] = { 1.1f,2.2f,3.3f,4.4f,5.5f,6.6f,7.7f,8.8f,9.9f,1.0f };
	float float_size, f_Array_size, f_no_elements;

	char c_Array[] = { 'A','B','C','D','E','T','G','S','F','V' };
	char char_size;
	char c_Array_size, c_no_elements;

	int i;
	int_size = sizeof(int);
	i_Array_size = sizeof(i_Array);
	i_no_elements = i_Array_size / int_size;
	for (i = 0; i < i_no_elements; i++)
	{
		printf("i_Array[%d]=%d\n", i, i_Array[i]);
	}
	printf("\n\n");
	float_size = sizeof(float);
	f_Array_size = sizeof(f_Array);
	f_no_elements = f_Array_size / float_size;
	for (i = 0; i < f_no_elements; i++)
	{
		printf("f_Array[%d]=%f\n", i, f_Array[i]);
	}
	printf("\n\n");
	char_size = sizeof(char);
	c_Array_size = sizeof(c_Array);
	c_no_elements = c_Array_size / char_size;
	for (i = 0; i < c_no_elements; i++)
	{
		printf("c_Array[%d]=%c\n", i, c_Array[i]);
	}
	return(0);
}