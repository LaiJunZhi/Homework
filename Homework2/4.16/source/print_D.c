#include<stdio.h>
#include<stdlib.h>
int print_D()
{
	int i, j, k;
	printf("(D)\n");
	for (i = 0; i <= 10; i++)
	{
		for (j = 10; j > i; j--)
		{
			printf("%s", " ");
		}
		for (k = 10; k > 10 - i; k--)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
}