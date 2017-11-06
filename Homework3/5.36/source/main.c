#include<stdio.h>
#include<stdlib.h>

int hano(int n, int A, int B, int C);

int main(void)
{
	int n;
	int a, b, c;
	printf("漢諾塔移動\n");
	printf("請輸入要移動的碟子數:");
	scanf("%d", &n);
	printf("輸入開始時碟子所在的柱子(1~3):");
	scanf("%d", &a);
	printf("輸入碟子最後移往的柱子(1~3):");
	scanf("%d", &b);
	printf("輸入當作暫存區的柱子(1~3):");
	scanf("%d", &c);

	if (a == b || a == c || b == c)
	{
		printf("輸入錯誤\n");
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
		printf("%d→%d\n", A, B);
	}
	else
	{
		hano(n - 1,	A, C, B);
		printf("%d→%d\n", A, B);
		hano(n - 1, C, B, A);
	}
}