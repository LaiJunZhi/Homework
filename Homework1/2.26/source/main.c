#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num1, num2, result;

	printf("請輸入兩整數，將判斷\n");
	printf("第一個數字是否為第二個數字的倍數:");

	scanf_s("%d%d", &num1, &num2);

	result = num1 % num2;
	
	if (result == 0)
		printf("結果:是倍數關係\n");

	if (result != 0)
		printf("結果:不是倍數關係\n");
	
	system("pause");
	return 0;
}