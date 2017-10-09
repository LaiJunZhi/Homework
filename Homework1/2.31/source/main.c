#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main(void)
{
	double num =0;
	
	printf("1~10的平方與次方數值\n");									
																		//原值	
	printf("%.0f	%.0f	%.0f\n", num, pow(num, 2), pow(num, 3));	// 0
	num++;
	printf("%.0f	%.0f	%.0f\n", num, pow(num, 2), pow(num, 3));	// 1
	num++;
	printf("%.0f	%.0f	%.0f\n", num, pow(num, 2), pow(num, 3));	// 2
	num++;
	printf("%.0f	%.0f	%.0f\n", num, pow(num, 2), pow(num, 3));	// 3
	num++;
	printf("%.0f	%.0f	%.0f\n", num, pow(num, 2), pow(num, 3));	// 4
	num++;
	printf("%.0f	%.0f	%.0f\n", num, pow(num, 2), pow(num, 3));	// 5
	num++;
	printf("%.0f	%.0f	%.0f\n", num, pow(num, 2), pow(num, 3));	// 6
	num++;
	printf("%.0f	%.0f	%.0f\n", num, pow(num, 2), pow(num, 3));	// 7
	num++;
	printf("%.0f	%.0f	%.0f\n", num, pow(num, 2), pow(num, 3));	// 8
	num++;
	printf("%.0f	%.0f	%.0f\n", num, pow(num, 2), pow(num, 3));	// 9
	num++;
	printf("%.0f	%.0f	%.0f\n", num, pow(num, 2), pow(num, 3));	// 10

	system("pause");
	return 0;
}