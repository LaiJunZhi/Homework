#include<stdio.h>
#include<stdlib.h>

int lcm(int x, int y);
int gcd(int x, int y);

int main(void)
{
	int num1, num2;
	int result;
	printf("�⥿��Ƴ̤p�����ƭp��\n");
	printf("�п�J��ӥ����:");
	scanf("%d %d", &num1, &num2);
	result = lcm(num1, num2);
	printf("�̤p�����Ƭ� %d\n", result);

	system("pause");
}

int lcm(int x, int y)
{
	int z;
	z = x*y / gcd(x, y);
	return z;
}

int gcd(int x, int y)
{
	int tmp;
	while (x%y != 0)
	{
		tmp = y;
		y = x%y;
		x = tmp;
	}
	return y;
}