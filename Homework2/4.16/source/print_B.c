#include<stdio.h>
#include<stdlib.h>
int print_B()
{
	int i, j;
	printf("(B)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 11; j > i; j--)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
}