#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int mil, fuel, fuelmil, parkingfee, toll;
	int	cost, sharepay, save;
	
	printf("�@���`���p��\n");
	printf("�@����������:�C����5��(NT)\n");
	printf("�п�J�H�U��T\n");

	printf("�C�Ѧ�p���{(km):");
	scanf_s("%d", &mil);
	printf("�C���ɨT�o����:");
	scanf_s("%d", &fuel);
	printf("�C���ɨT�o��p���{��(km):");
	scanf_s("%d", &fuelmil);
	printf("�C�鰱���O:");
	scanf_s("%d", &parkingfee);
	printf("�C��L���O:");
	scanf_s("%d", &toll);

	cost = (mil / (fuelmil*1.6))*fuel + parkingfee + toll;
	sharepay = mil * 5;
	save = cost - sharepay;

	printf("�C�Ѷ}���`��O��%d��\n", cost);
	printf("�H�@���覡�A�C��i��%d��\n", save);
	
	system("pause");
	return 0;
}