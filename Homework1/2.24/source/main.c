#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num;

	printf("�_���ƧP�_\n");
	printf("�п�J�@�Ӿ��:");

	scanf_s("%d", &num);

	num %= 2;
	
	if (num == 0)
		printf("����ƬO����\n");
	if (num == 1)
		printf("����ƬO�_��\n");
	
	system("pause");
	return 0;
}