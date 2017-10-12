#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int account=0; 
	float beginbalance, charge, credit, limit;
	float newcredit;

	printf("信用額度計算工具\n");

	while (account != -1)
	{
		printf("請輸入帳號(-1 to end):");
		scanf_s("%d", &account);

		if (account == -1)
		{
			break;
		}

		printf("月初時尚未付清餘額:");
		scanf_s("%f", &beginbalance);
		printf("本月簽帳款項:");
		scanf_s("%f", &charge);
		printf("本月已付款項:");
		scanf_s("%f", &credit);
		printf("允許信用額度:");
		scanf_s("%f", &limit);
		printf("\n");

		newcredit = beginbalance + charge - credit;

		if (newcredit > limit)
		{
			printf("帳號:		%d\n", account);
			printf("信用額度:	%.2f\n", limit);
			printf("未付清款項:	%.2f\n", newcredit);
			printf("超過信用額度!\n");
			printf("\n");
		}
	}
	system("pause");
	return 0;
}