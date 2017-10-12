#include<stdio.h>
#include<stdlib.h>

int Salary_PT()
{
	int amount;
	float money;
	float salary;

	printf("員工:零工\n");

	printf("請輸入產品生產件數:");
	scanf_s("%d", &amount);
	printf("請輸入每件報酬:");
	scanf_s("%f", &money);
	salary = money*(float)amount;
	printf("週薪為%.2f\n", salary);
	printf("\n");
}