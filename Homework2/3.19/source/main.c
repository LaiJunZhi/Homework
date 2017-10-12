#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int days;
	float principal=0, rate;
	float interest;
	
	printf("利息計算工具\n");

	while (principal != -1)
	{
		printf("輸入公債資金:");
		scanf_s("%f", &principal);

		if (principal == -1)
		{
			break;
		}

		printf("輸入利率:");
		scanf_s("%f", &rate);
		printf("輸入天數:");
		scanf_s("%d", &days);

		interest = principal * rate * (float)days / 365;
		printf("公債獲得利息:%.2f\n", interest);
		printf("\n");
	}

	system("pause");
	return 0;
}