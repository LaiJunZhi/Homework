#include<stdio.h>
#include<stdlib.h>

int Salary_hourlywork()
{
	int hours = 0;
	float rate, salary;

	printf("員工:時薪工\n");


	printf("輸入員工每週工作時數(-1 to end):");
	scanf_s("%d", &hours);
	printf("輸入每小時工資($00.00):");
	scanf_s("%f", &rate);

	if (hours <= 40)
	{
		salary = hours * rate;
	}
	else
	{
		salary = 40 * rate + (hours - 40) * rate * 1.5;

	}
	printf("週薪為 %.2f\n", salary);
	printf("\n");
}