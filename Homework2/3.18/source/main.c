#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float sale=0;
	float salary;
	
	printf("�Ī��p��u��\n");

	while (sale != -1)
	{
		printf("��J�W�g�P���B:");
		scanf_s("%f", &sale);

		if (sale == -1)
		{
			break;
		}

		salary = sale * 9 / 100 + 200;
		printf("���J:%.2f\n",salary);
		printf("\n");
	}
	system("pause");
	return 0;
}