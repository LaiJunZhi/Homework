#include<stdio.h>
#include<stdlib.h>

int Salary_PT()
{
	int amount;
	float money;
	float salary;

	printf("���u:�s�u\n");

	printf("�п�J���~�Ͳ����:");
	scanf_s("%d", &amount);
	printf("�п�J�C����S:");
	scanf_s("%f", &money);
	salary = money*(float)amount;
	printf("�g�~��%.2f\n", salary);
	printf("\n");
}