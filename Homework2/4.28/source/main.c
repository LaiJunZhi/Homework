#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int code = 0;
	printf("計算員工週薪\n");

	while (code != -1)
	{
		printf("請輸入薪資代碼(1~4)，結束計算(0):");	
		scanf_s("%d", &code);
		switch (code)
		{
		case 1:
			Salary_manager();
			break;
		case 2:
			Salary_hourlywork();
			break;
		case 3:
			Salary_commissioner();
			break;
		case 4:
			Salary_PT();
			break;
		case 0:
			return 1;
			break;
		default:
			printf("代碼輸入錯誤\n");
			break;
		}
	}
	system("pause");
	return 0;
}