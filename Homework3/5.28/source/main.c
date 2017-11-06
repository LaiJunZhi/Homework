#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

char letter_change(char Cletter);

int main(void)
{
	char letter;

	printf("字母大小寫轉換\n");
	printf("請輸入一個字母:");
	scanf("%c", &letter);
	if (isalpha(letter))
	{
		letter = letter_change(letter);
		printf("相反字母:%c\n", letter);
	}
	else
	{
		printf("不是字母喔!\n");
	}

	system("pause");
}
char letter_change(char Cletter)
{
	if (islower(Cletter))
		Cletter= toupper(Cletter);
	else
		Cletter = tolower(Cletter);
	return Cletter;
}
