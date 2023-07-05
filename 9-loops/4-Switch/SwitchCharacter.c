#include<stdio.h>

#define ALPHABET_BIGINING_UPPER 65
#define ALPHABET_END 90
#define ALPHABET_LOWER_BIG 97
#define ALPHABET_LOWER_END 122
#define DIGIT_BIG 45
#define DIGIT_END 57
int main()
{
	int c_value;
	char ch;
	printf("Enter character\n");
	ch = getch();
	switch (ch)
	{
	case 'A':
	case 'a':
		
	case 'E':
	case 'e':

	case 'I':
	case 'i':
		
	case 'O':
	case 'o':
		
	case 'U':
	case 'u':
		printf("Character %c is vowel\n", ch);
		break;
	default:
		c_value = (int)ch;
		if ((ch >= ALPHABET_BIGINING_UPPER && ch <= ALPHABET_END) || (ch >= ALPHABET_LOWER_BIG && ch <= ALPHABET_LOWER_END))
		{
			printf("Character %c is CONSOLANT\n", ch);
		}
		else if (ch >= DIGIT_BIG && ch <= DIGIT_END)
		{
			printf("Character %c is digit\n", ch);
		}
		else
		{
			printf("Character %c is special character\n", ch);
		}
		break;
	}
	return(0);

}