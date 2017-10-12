#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j,k;

	//----------------菱形上半部------------
	for (i = 1; i <=5; i++)
	{
		
		for (j = 5 - i ; j >0 ; j--)
		{
			printf("%s", " ");
		}
		for (k = 1; k <= 2 * i - 1; k++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	//----------------菱形下半部------------
	for (i = 4; i >0; i--)
	{
		for (j = 5 - i; j > 0; j--)
		{
			printf("%s", " ");
		}
		for (k = 1; k <= 2 * i - 1; k++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}