#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Fibonacci:0,1,1,2,3,5,8,13.....

unsigned long long int fibonacci(unsigned int k);


int main(void)
{
	unsigned int n;
	unsigned long long int result;

	printf("¶O§B¨º«´¯Å¼Æ\n");
	printf("Fibonacci(n) n=:");
	scanf_s("%u", &n);

	fibonacci(n);

	system("pause");

}

unsigned long long int fibonacci(unsigned int n)
{
	unsigned long long int f1 = 0, f2 = 1, f3 = 1;
	unsigned int i, k;
	k = n - 1;
	if (k == 0)
	{
		printf("Fibonacci(1):%llu\n", f1);
		return;
	}

	for (i = 3; i <= k; i++)
	{
		f1 = f2;
		f2 = f3;
		f3 = f1 + f2;
		if (f3 <= f2)
		{
			printf("Fibonacci(%u):%llu is the bigest for unsigned long long int\n", i, f2);
			break;
		}
	}
	if (f3 >= f2)
	{
		printf("Fibonacci(%u):%llu\n", n, f3);
	}
}