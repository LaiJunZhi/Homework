#include<stdio.h>
#include<stdlib.h>

int integerPower(int base, int exponent);

int main(void)
{
	int x, y,z;
	printf("���ƹB��\n");
	printf("��J���ƩM����:");
	scanf("%d %d", &x, &y);
	z = integerPower(x, y);
	printf("%d��%d���謰 %d\n", x, y, z);
	
	system("pause");
	
}

int integerPower(int base, int exponent)
{
	int result;
	if (exponent == 1)
	{
		return base;
	}
	else
	{
		result = base*integerPower(base, exponent - 1);
		return result;
	}
	
}