#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int hours =0;
	float rate,salary;

	printf("薪資計算工具\n");

	while (hours != -1)
	{
		printf("輸入雇員每週工作時數(-1 to end):");
		scanf_s("%d", &hours);

		if (hours == -1)
		{
			break;
		}

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

		printf("雇員應得工資為 %.2f\n", salary);
		printf("\n");
	}

	system("pause");
	return 0;
}