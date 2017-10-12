#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int length, width;
	int i, j = 0, k = 0, m = 0;
	printf("印出空心矩形\n");
	printf("請輸入長和寬:");
	scanf_s("%d %d", &length, &width);

	if (length>2)
	{
		for (i = 0;i < width;i++)
		{
			printf("+");
		}

		printf("\n");

		for (i = 0; i < length-2; i++)
		{
			printf("+");
			for (j = 0; j < width-2; j++)
			{
				printf(" ");
			}
			printf("+");
			printf("\n");
		}

		for (i = 0; i < width; i++)
		{
			printf("+");
		}
	}
	else
	{
		for (i = 0; i < length; i++)
		{
			for (j = 0; j < width; j++)
			{
				printf("+");
			}
			printf("\n");
		}
	}

	system("pause");
	return 0;
}