#include<stdio.h>
#define MAX_STRING_LENGTH 512
int main()
{
	int Strlen(char[]);
	int i_stringlength = 0,iY;
	int A_Count = 0, E_Count = 0, I_Count = 0, O_Count = 0, U_Count = 0;
	char c_Array[MAX_STRING_LENGTH];
	printf("Enter the string:\n");
	gets_s(c_Array, MAX_STRING_LENGTH);
	printf("String entered by you=%s\n", c_Array);
	i_stringlength = Strlen(c_Array);
	for (i = 0; i < i_stringlength; i++)
	{
		switch (c_Array[i])
		{
		case 'A':
		case 'a':
			A_Count++;
			break;
		case 'E':
		case 'e':
			E_Count++;
			break;
		case 'I':
		case 'i':
			I_Count++;
			break;
		case 'O':
		case 'o':
			O_Count++;
			break;
		case 'U':
		case 'u':
			U_Count++;
			break;
		default:
			break;
		}
	}
	printf("Count of 'A'=%d\n", A_Count);
	printf("Count of 'E'=%d\n", E_Count);
	printf("Count of 'I'=%d\n", I_Count);
	printf("Count of 'O'=%d\n", O_Count);
	printf("Count of 'U'=%d\n", U_Count);

	return(0);
}
int Strlen(char str[])
{
	int j, i_stringlength = 0;
	for (j = 0; j < MAX_STRING_LENGTH; j++)
	{
		if (str[j] == '\0')
			break;
		i_stringlength++;
	}
	return(i_stringlength);
}