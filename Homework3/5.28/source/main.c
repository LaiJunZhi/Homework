#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

char letter_change(char Cletter);

int main(void)
{
	char letter;

	printf("�r���j�p�g�ഫ\n");
	printf("�п�J�@�Ӧr��:");
	scanf("%c", &letter);
	if (isalpha(letter))
	{
		letter = letter_change(letter);
		printf("�ۤϦr��:%c\n", letter);
	}
	else
	{
		printf("���O�r����!\n");
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
