#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j,k;

	//----------------�٧ΤW�b��------------
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
	//----------------�٧ΤU�b��------------
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