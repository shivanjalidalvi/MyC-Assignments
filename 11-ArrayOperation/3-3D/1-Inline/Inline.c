#include<stdio.h>
int main()
{
	int iArray[5][3][2] = { {{1,2},{3,4},{5,6}},
						{{7,8},{9,10},{11,12}},
						{{1,13},{45,90},{42,02}},
						{{53,93},{21,22},{23,24}},
						{{25,26},{27,57},{34,65}} };
	int int_size, array_size, width, dept,height, num_elements;
	int_size = sizeof(int);
	array_size = sizeof(iArray);
	width = array_size / sizeof(iArray[0]);
	height = sizeof(iArray[0]) / sizeof(iArray[0][0]);
	dept = sizeof(iArray[0][0]) / int_size;
	printf("Size of int=%d\n", int_size);
	printf("width=%d\n", width);
	printf("height=%d\n", height);
	printf("depth=%d\n", dept);
	num_elements = width * height * dept;
	printf("Num of elements=%d\n", num_elements);

	printf("***Row1***\n");
	printf("***Column1***\n");
	printf("iArray[0][0][0]=%d\n", iArray[0][0][0]);
	printf("iArray[0][0][1]=%d\n", iArray[0][0][1]);

	printf("***Row1***\n");
	printf("***Column2***\n");
	printf("iArray[0][1][0]=%d\n", iArray[0][1][0]);
	printf("iArray[0][1][1]=%d\n", iArray[0][1][1]);

	printf("***Row1***\n");
	printf("***Column3***\n");
	printf("iArray[0][2][0]=%d\n", iArray[0][2][0]);
	printf("iArray[0][2][1]=%d\n", iArray[0][2][1]);

	printf("***Row2***\n");
	printf("***Column1***\n");
	printf("iArray[1][0][0]=%d\n", iArray[1][0][0]);
	printf("iArray[1][0][1]=%d\n", iArray[1][0][1]);

	printf("***Row2***\n");
	printf("***Column2***\n");
	printf("iArray[1][1][0]=%d\n", iArray[1][1][0]);
	printf("iArray[1][1][1]=%d\n", iArray[1][1][1]);

	printf("***Row2***\n");
	printf("***Column3***\n");
	printf("iArray[1][2][0]=%d\n", iArray[0][2][0]);
	printf("iArray[1][2][1]=%d\n", iArray[0][2][1]);

	printf("***Row3***\n");
	printf("***Column1***\n");
	printf("iArray[2][0][0]=%d\n", iArray[2][0][0]);
	printf("iArray[2][0][1]=%d\n", iArray[2][0][1]);

	printf("***Row3***\n");
	printf("***Column2***\n");
	printf("iArray[2][1][0]=%d\n", iArray[2][1][0]);
	printf("iArray[2][1][1]=%d\n", iArray[2][1][1]);

	printf("***Row3***\n");
	printf("***Column3***\n");
	printf("iArray[2][2][0]=%d\n", iArray[2][2][0]);
	printf("iArray[2][2][1]=%d\n", iArray[2][2][1]);

	printf("***Row4***\n");
	printf("***Column1***\n");
	printf("iArray[3][0][0]=%d\n", iArray[3][0][0]);
	printf("iArray[3][0][1]=%d\n", iArray[3][0][1]);

	printf("***Row4***\n");
	printf("***Column2***\n");
	printf("iArray[3][1][0]=%d\n", iArray[3][1][0]);
	printf("iArray[3][1][1]=%d\n", iArray[3][1][1]);

	printf("***Row4***\n");
	printf("***Column3***\n");
	printf("iArray[3][2][0]=%d\n", iArray[3][2][0]);
	printf("iArray[3][2][1]=%d\n", iArray[3][2][1]);

	printf("***Row5***\n");
	printf("***Column1***\n");
	printf("iArray[4][0][0]=%d\n", iArray[4][0][0]);
	printf("iArray[4][0][1]=%d\n", iArray[4][0][1]);
	printf("***Row5***\n");
	printf("***Column2***\n");
	printf("iArray[4][1][0]=%d\n", iArray[4][1][0]);
	printf("iArray[4][1][1]=%d\n", iArray[4][1][1]);
	printf("***Row5***\n");
	printf("***Column3***\n");
	printf("iArray[4][2][0]=%d\n", iArray[4][2][0]);
	printf("iArray[4][2][1]=%d\n", iArray[4][2][1]);

	return(0);
}