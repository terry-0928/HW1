#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float height; 
	float weight; 
	float BMI_result = 0; 

	printf("�п�J���� (���:����): ");
	scanf("%f", &height); 

	printf("�п�J�魫 (���:����): ");
	scanf("%f", &weight); 

	BMI_result = weight / (height * height); 

	printf("\n");

	printf("BMI �ƭ�:\n");

	if (BMI_result < 18.5)
		
		printf("�L��: �C�� 18.5\n");
	else if (BMI_result < 25)
		
		printf("���`: 18.5 �P 24.9 ����\n");
	else if (BMI_result < 30)
		
		printf("�L��: 25 �P 29.9 ����\n");
	else
		
		printf("�έD: �j�󵥩� 30\n");

	printf("\n");

	system("pause");
	return 0;
}