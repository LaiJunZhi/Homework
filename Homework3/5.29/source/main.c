#include<stdio.h>
#include<stdlib.h>

int lcm(int x, int y);
int gcd(int x, int y);

int main(void)
{
	int num1, num2;
	int result;
	printf("ㄢタ俱计程そ计璸衡\n");
	printf("叫块ㄢタ俱计:");
	scanf("%d %d", &num1, &num2);
	result = lcm(num1, num2);
	printf("程そ计 %d\n", result);

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