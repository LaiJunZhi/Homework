#include<stdio.h>
#include<stdlib.h>

double power(double, int);

void main(void)
{
	int k;
	double ans;
	
	printf("�p��3.5������?�п�Jk=");
	scanf("%d", &k);
	ans = power(3.5, k);
	printf("3.5��%d����=%f\n", k, ans);
	system("pause");
}

double power(double X, int n)
{
	int i;
	double powerXn = 1;
	for (i = 1; i <= n; i++)
		powerXn = powerXn*X;
	return powerXn;
}