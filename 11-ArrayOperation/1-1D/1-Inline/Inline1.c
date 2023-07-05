#include<stdio.h>
int main()
{
	int i_Array[] = { 1,2,3,4,5,6,7,8,9,0 };
	int int_size;
	int i_Array_size;
	int i_no_elements;

	float f_Array[] = { 1.0f,2.0f,3.0f,4.0f,5.0f,6.0f,8.0f,9.0f,0.8f };
	float float_size;
	float f_Array_size;
	float f_no_elements;

	char c_Array[] = { 'A','B','C','N','K','L','O' };
	char char_size;
	char c_Array_size;
	char c_no_elements;

	printf("Displaying Integer Array:\n");
	printf("i_Array[0]=%d\n", i_Array[0]);
	printf("i_Array[1]=%d\n", i_Array[1]);
	printf("i_Array[2]=%d\n", i_Array[2]);
	printf("i_Array[3]=%d\n", i_Array[3]);
	printf("i_Array[4]=%d\n", i_Array[4]);
	printf("i_Array[5]=%d\n", i_Array[5]);
	printf("i_Array[6]=%d\n", i_Array[6]);
	printf("i_Array[7]=%d\n", i_Array[7]);
	printf("i_Array[8]=%d\n", i_Array[8]);
	printf("i_Array[9]=%d\n", i_Array[9]);
	
	int_size = sizeof(int);
	i_Array_size = sizeof(i_Array);
	i_no_elements = i_Array_size / int_size;
	printf("Size of int=%d\n", int_size);
	printf("Size of array=%d\n", i_Array_size);
	printf("No of elements in i_Array=%d\n", i_no_elements);

	printf("Displaying float Array:\n");
	printf("f_Array[0]=%f\n", f_Array[0]);
	printf("f_Array[1]=%f\n", f_Array[1]);
	printf("f_Array[2]=%f\n", f_Array[2]);
	printf("f_Array[3]=%f\n", f_Array[3]);
	printf("f_Array[4]=%f\n", f_Array[4]);
	printf("f_Array[5]=%f\n", f_Array[5]);
	printf("f_Array[6]=%f\n", f_Array[6]);
	printf("f_Array[7]=%f\n", f_Array[7]);
	printf("f_Array[8]=%f\n", f_Array[8]);
	printf("f_Array[9]=%f\n", f_Array[9]);

	float_size = sizeof(float);
	f_Array_size = sizeof(f_Array);
	f_no_elements = f_Array_size / float_size;
	printf("Size of float=%f\n", float_size);
	printf("Size of Array=%f\n", f_Array_size);
	printf("No. of elements in f_Array=%f\n", f_no_elements);

	printf("Displaying Char array:\n");
	printf("c_Array[0]=%c\n", c_Array[0]);
	printf("c_Array[1]=%c\n", c_Array[1]);
	printf("c_Array[2]=%c\n", c_Array[2]);
	printf("c_Array[3]=%c\n", c_Array[3]);
	printf("c_Array[4]=%c\n", c_Array[4]);
	printf("c_Array[5]=%c\n", c_Array[5]);
	printf("c_Array[6]=%c\n", c_Array[6]);

	char_size = sizeof(char);
	c_Array_size = sizeof(c_Array);
	c_no_elements = c_Array_size / char_size;
	printf("Size of char=%d\n", char_size);
	printf("Size of c_Array=%d\n", c_Array_size);
	printf("No. of elements in c_Array=%d\n", c_no_elements);

	return(0);
}