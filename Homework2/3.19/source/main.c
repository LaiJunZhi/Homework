#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int days;
	float principal=0, rate;
	float interest;
	
	printf("�Q���p��u��\n");

	while (principal != -1)
	{
		printf("��J���Ÿ��:");
		scanf_s("%f", &principal);

		if (principal == -1)
		{
			break;
		}

		printf("��J�Q�v:");
		scanf_s("%f", &rate);
		printf("��J�Ѽ�:");
		scanf_s("%d", &days);

		interest = principal * rate * (float)days / 365;
		printf("������o�Q��:%.2f\n", interest);
		printf("\n");
	}

	system("pause");
	return 0;
}