#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float wei, hei, BMI;

	printf("BMI calculation\n");
	printf("Enter the weight(kg) and the height(m):");

	scanf_s("%f %f", &wei, &hei);
	BMI = wei / (hei * hei);

	printf("BMI is %.1f\n", BMI);

	printf("\n");

	printf("BMI VALUES\n");
	printf("Underweight: less than 18.5\n");
	printf("Normal:      between 18.5 and 24.9\n");
	printf("Overweight:  between 18.5 and 24.9\n");
	printf("Obese:       30 or greater\n");

	system("pause");
	return 0;
}