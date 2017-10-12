#include<stdio.h>
#include<stdlib.h>

int Salary_commissioner()
{
	float sale = 0;
	float salary;

	printf("員工:抽佣金工\n");

	printf("輸入上週銷售額:");
	scanf_s("%f", &sale);
	salary = sale * 57 / 1000 + 250;
	printf("週薪為%.2f\n", salary);
	printf("\n");
	
}