#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float sale=0;
	float salary;
	
	printf("傭金計算工具\n");

	while (sale != -1)
	{
		printf("輸入上週銷售額:");
		scanf_s("%f", &sale);

		if (sale == -1)
		{
			break;
		}

		salary = sale * 9 / 100 + 200;
		printf("收入:%.2f\n",salary);
		printf("\n");
	}
	system("pause");
	return 0;
}