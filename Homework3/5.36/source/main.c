#include<stdio.h>
#include<stdlib.h>

int hano(int n, int A, int B, int C);

int main(void)
{
	int n;
	int a, b, c;
	printf("�~�ն𲾰�\n");
	printf("�п�J�n���ʪ��Фl��:");
	scanf("%d", &n);
	printf("��J�}�l�ɺФl�Ҧb���W�l(1~3):");
	scanf("%d", &a);
	printf("��J�Фl�̫Ჾ�����W�l(1~3):");
	scanf("%d", &b);
	printf("��J��@�Ȧs�Ϫ��W�l(1~3):");
	scanf("%d", &c);

	if (a == b || a == c || b == c)
	{
		printf("��J���~\n");
	}
	else
	{
		hano(n, a, b, c);
	}

	system("pause");
	return 0;
}

int hano(int n, int A, int B, int C)
{
	if (n == 1)
	{
		printf("%d��%d\n", A, B);
	}
	else
	{
		hano(n - 1,	A, C, B);
		printf("%d��%d\n", A, B);
		hano(n - 1, C, B, A);
	}
}