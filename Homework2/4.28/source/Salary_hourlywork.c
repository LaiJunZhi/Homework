#include<stdio.h>
#include<stdlib.h>

int Salary_hourlywork()
{
	int hours = 0;
	float rate, salary;

	printf("���u:���~�u\n");


	printf("��J���u�C�g�u�@�ɼ�(-1 to end):");
	scanf_s("%d", &hours);
	printf("��J�C�p�ɤu��($00.00):");
	scanf_s("%f", &rate);

	if (hours <= 40)
	{
		salary = hours * rate;
	}
	else
	{
		salary = 40 * rate + (hours - 40) * rate * 1.5;

	}
	printf("�g�~�� %.2f\n", salary);
	printf("\n");
}