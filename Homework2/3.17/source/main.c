#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int account=0; 
	float beginbalance, charge, credit, limit;
	float newcredit;

	printf("�H���B�׭p��u��\n");

	while (account != -1)
	{
		printf("�п�J�b��(-1 to end):");
		scanf_s("%d", &account);

		if (account == -1)
		{
			break;
		}

		printf("���ɩ|���I�M�l�B:");
		scanf_s("%f", &beginbalance);
		printf("����ñ�b�ڶ�:");
		scanf_s("%f", &charge);
		printf("����w�I�ڶ�:");
		scanf_s("%f", &credit);
		printf("���\�H���B��:");
		scanf_s("%f", &limit);
		printf("\n");

		newcredit = beginbalance + charge - credit;

		if (newcredit > limit)
		{
			printf("�b��:		%d\n", account);
			printf("�H���B��:	%.2f\n", limit);
			printf("���I�M�ڶ�:	%.2f\n", newcredit);
			printf("�W�L�H���B��!\n");
			printf("\n");
		}
	}
	system("pause");
	return 0;
}