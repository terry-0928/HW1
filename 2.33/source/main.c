#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	float total_distance;
	float gas_money;
	float kilometer_per_liter;
	int parking_fee;
	int tolls;
	int total_cost;

	printf("�п�J �@�Ѫ��`���{�� (���:����): ");
	scanf("%f", &total_distance);

	printf("�п�J �T�o�@���ɪ�����: ");
	scanf("%f", &gas_money);

	printf("�п�J �����@���ɯ��p�h�֤���: ");
	scanf("%f", &kilometer_per_liter);

	printf("�п�J �@�Ѫ������O: ");
	scanf("%d", &parking_fee);

	printf("�п�J �@�Ѫ��q��O (�L���O): ");
	scanf("%d", &tolls);

	printf("\n");

	total_cost = (total_distance / kilometer_per_liter) * gas_money + parking_fee + tolls + 0.5;
	printf("�}���@���`�@��O: %d ��\n", total_cost);

	system("pause");
	return 0;
}