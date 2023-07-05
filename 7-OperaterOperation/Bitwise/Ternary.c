#include<stdio.h>
int main()
{
	int a, b, p, q;
	char ch_result_01, ch_result_02;
	int i_result1, i_result2;

	a = 5;
	b = 4;
	ch_result_01 = (a > b) ? 'A' : 'B';
	i_result1 = (a > b) ? a : b;
	printf("Trnary operator ..%c and %d\n",  ch_result_01,i_result1);

	p = 5;
	q = 7;
	ch_result_02 = (p != q) ? 'P' : 'Q';
	i_result2 = (p != q) ? p : q;
	printf("Trenary operation ..%c and %d\n",ch_result_02, i_result2);
	return(0);
}