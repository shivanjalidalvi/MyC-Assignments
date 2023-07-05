#include<stdio.h>
#define NO_ELEMENTS_INT 5
#define NO_ELEMENTS_FLOAT 3
#define NO_ELEMENTS_CHAR 10
int main()
{
	int i_Array[NO_ELEMENTS_INT];
	float f_Array[NO_ELEMENTS_FLOAT];
	char c_Array[NO_ELEMENTS_CHAR];
	int i, num;
	printf("Enter Integer Arry:\n");
	for (i = 0; i < NO_ELEMENTS_INT; i++)
		scanf("%d", &i_Array[i]);
	printf("Enter Float Array:\n");
	for (i = 0; i < NO_ELEMENTS_FLOAT; i++)
		scanf("%f", &f_Array[i]);
	printf("Enter Char Array:\n");
	for (i = 0; i < NO_ELEMENTS_CHAR; i++)
	{

		c_Array[i] = getch();
		printf("%c\n", c_Array[i]);
    }
	for(i=0;i<NO_ELEMENTS_INT;i++)
	printf("i_Array[%d]=%d\n",i, i_Array[i]);
	for (i = 0; i < NO_ELEMENTS_FLOAT; i++)
		printf("f_Array[%d]=%f\n", i, f_Array[i]);
	for (i = 0; i < NO_ELEMENTS_CHAR; i++)
		printf("c_Array[%d]=%c\n", i, c_Array[i]);
	return(0);
	
}