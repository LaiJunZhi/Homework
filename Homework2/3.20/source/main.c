#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int hours =0;
	float rate,salary;

	printf("�~��p��u��\n");

	while (hours != -1)
	{
		printf("��J�����C�g�u�@�ɼ�(-1 to end):");
		scanf_s("%d", &hours);

		if (hours == -1)
		{
			break;
		}

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

		printf("�������o�u�ꬰ %.2f\n", salary);
		printf("\n");
	}

	system("pause");
	return 0;
}