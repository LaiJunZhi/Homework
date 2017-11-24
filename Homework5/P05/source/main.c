#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	int *aPtr;

	a = 7;
	aPtr = &a;

	printf("The address of a is %p"
		"\n The value of aPte is %p", &a, aPtr);

	printf("\n\nThe value of a is %d"
		"\n The value of *aPte is %d", a, *aPtr);

	printf("\n\nShowing that * and & are complement of"
		"each other\n&*aPtr = %p"
		"\n*&aPtr = %p\n", &*aPtr, *&aPtr);

	system("pause");
	return 0;
}