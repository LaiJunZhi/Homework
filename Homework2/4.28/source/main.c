#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int code = 0;
	printf("�p����u�g�~\n");

	while (code != -1)
	{
		printf("�п�J�~��N�X(1~4)�A�����p��(0):");	
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
			printf("�N�X��J���~\n");
			break;
		}
	}
	system("pause");
	return 0;
}