#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	int side1, side2;
	int hypotenuse;
	int count=0;
	printf("(hypotenuse,side1,side2)\n");
	for (hypotenuse = 1; hypotenuse <= 500; hypotenuse++)
	{
		for (side1 = 1; side1 <= 500; side1++)
		{
			for (side2 = 1; side2 <= 500; side2++)
			{
				if (pow(hypotenuse, 2) == pow(side1, 2) + pow(side2, 2))
				{
					printf("(%3d,%3d,%3d)	", hypotenuse, side1, side2);
					count += 1;
				}
			}
		}
	}
	printf("¦@%d­Ó\n", count);
	system("pause");
	return 0;
}