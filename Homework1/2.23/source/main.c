#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num1,num2,num3,temp;

	printf("耞俱计い程㎝程\n");
	printf("叫块俱计:");

	scanf_s("%d%d%d", &num1, &num2, &num3);

	if (num1 < num2)
	{
		temp = num2;
		num2 = num1;
		num1 = temp;
	}

	if (num1 < num3)
	{
		temp = num3;
		num3 = num1;
		num1 = temp;
	}

	if (num2 < num3)
	{
		temp = num3;
		num3 = num2;
		num2 = temp;
	}

	printf("程琌%d\n", num1);
	printf("程琌%d\n", num3);

	system("pause");
	return 0;
}