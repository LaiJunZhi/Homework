#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num1,num2,num3,temp;

	printf("�P�_�T�Ӿ�Ƥ����̤j�ȩM�̤p��\n");
	printf("�п�J�T�Ӿ��:");

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

	printf("�̤j�ȬO%d\n", num1);
	printf("�̤p�ȬO%d\n", num3);

	system("pause");
	return 0;
}