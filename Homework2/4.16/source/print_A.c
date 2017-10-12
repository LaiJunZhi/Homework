#include<stdio.h>
#include<stdlib.h>
int print_A()
{
	int i, j;
	printf("(A)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
}