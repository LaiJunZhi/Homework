#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num1, num2, result;

	printf("�п�J���ơA�N�P�_\n");
	printf("�Ĥ@�ӼƦr�O�_���ĤG�ӼƦr������:");

	scanf_s("%d%d", &num1, &num2);

	result = num1 % num2;
	
	if (result == 0)
		printf("���G:�O�������Y\n");

	if (result != 0)
		printf("���G:���O�������Y\n");
	
	system("pause");
	return 0;
}