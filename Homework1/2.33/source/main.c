#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int mil, fuel, fuelmil, parkingfee, toll;
	int	cost, sharepay, save;
	
	printf("共乘節約計算\n");
	printf("共乘平分車資:每公里5元(NT)\n");
	printf("請輸入以下資訊\n");

	printf("每天行駛里程(km):");
	scanf_s("%d", &mil);
	printf("每公升汽油價格:");
	scanf_s("%d", &fuel);
	printf("每公升汽油行駛里程數(km):");
	scanf_s("%d", &fuelmil);
	printf("每日停車費:");
	scanf_s("%d", &parkingfee);
	printf("每日過路費:");
	scanf_s("%d", &toll);

	cost = (mil / (fuelmil*1.6))*fuel + parkingfee + toll;
	sharepay = mil * 5;
	save = cost - sharepay;

	printf("每天開車總花費為%d元\n", cost);
	printf("以共乘方式，每日可省%d元\n", save);
	
	system("pause");
	return 0;
}