#include<stdio.h>
#include<stdlib.h>
int print_C()
{
	int i, j, k;
	printf("(C)\n");
	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("%s", " ");
		}
		for (k = 0; k < 10 - i; k++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
}