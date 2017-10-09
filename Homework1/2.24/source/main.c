#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num;

	printf("案计耞\n");
	printf("叫块俱计:");

	scanf_s("%d", &num);

	num %= 2;
	
	if (num == 0)
		printf("俱计琌案计\n");
	if (num == 1)
		printf("俱计琌计\n");
	
	system("pause");
	return 0;
}