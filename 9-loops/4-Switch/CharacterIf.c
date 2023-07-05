#include<stdio.h>

#define CHARACTER_ALPHABETS_UPPER_CASE_BEGINING 65
#define CHARACTER_ALPHABETS_UPPER_CASE_END 90

#define CHARACTER_ALPHABETS_LOWER_CASE_BIGINING 97
#define CHARACTER_ALPHABETS_LOWER_CASE_END 122

#define DIGIT_BIGINING 48
#define DIGIT_END 57

int main()
{
	char ch;
	int c_value;
	printf("Enter the character:\n");
	ch = getch();
	if ((ch == 'A' || ch == 'a') || (ch == 'E' || ch == 'e') || (ch == 'I' || ch == 'i') || (ch == 'O' || ch == 'o') || (ch == 'U' || ch == 'u'))
	{
		printf("Character %c is vowel\n",ch);
	}
	else
	{
		c_value = (int)ch;
		if ((ch >= CHARACTER_ALPHABETS_UPPER_CASE_BEGINING && ch <= CHARACTER_ALPHABETS_UPPER_CASE_END) || (ch >= CHARACTER_ALPHABETS_LOWER_CASE_BIGINING && ch <= CHARACTER_ALPHABETS_LOWER_CASE_END))
		{
			printf("Character %c is consolant\n",ch);
		}
		else if (ch >= DIGIT_BIGINING && ch <= DIGIT_END)
		{
			printf("Character %c is digit\n",ch);
		}
		else
			printf("Character %c is special character",ch);
	}
	printf("\n\n");
	return(0);
}