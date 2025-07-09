// ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define PRICE_BURGER 4000
#define PRICE_COKE   1500
#define PRICE_FRIES  2000
#define PRICE_SET    6500

int main(void) {
	int num_burger, num_fries, num_coke;

	printf("[�ܹ��� 4000��, ����Ƣ�� 2000��, �ݶ� 1500��, ��Ʈ 6500��]\n");
	printf("�ܹ��� ����? ");
	scanf("%d", &num_burger);
	printf("����Ƣ�� ����? ");
	scanf("%d", &num_fries);
	printf("�ݶ� ����? ");
	scanf("%d", &num_coke);

	int num_sets;
	int rem_burger, rem_fries, rem_coke; // ��Ʈ ���� �� ���� ��ǰ ����
	int total_price = 0;
	
    num_sets = num_burger;
    if (num_coke < num_sets) {
        num_sets = num_coke;
    }
    if (num_fries < num_sets) {
        num_sets = num_fries;
    }

    // ��Ʈ�� �����ϰ� ���� ��ǰ ���� ���
    rem_burger = num_burger - num_sets;
    rem_coke = num_coke - num_sets;
    rem_fries = num_fries - num_sets;

    // ������ ���
    printf("%-10s\t%s\t%s\t%s\n", "��ǰ��", "�ܰ�", "����", "�ݾ�");

    // ��Ʈ �޴� ��� �� ���
    if (num_sets > 0) {
        int price = num_sets * PRICE_SET;
        printf("%-10s\t%d\t%d\t%d\n", "��Ʈ", PRICE_SET, num_sets, price);
        total_price += price;
    }
    // ���� �ܹ��� ��� �� ���
    if (rem_burger > 0) {
        int price = rem_burger * PRICE_BURGER;
        printf("%-10s\t%d\t%d\t%d\n", "�ܹ���", PRICE_BURGER, rem_burger, price);
        total_price += price;
    }
    // ���� ����Ƣ�� ��� �� ���
    if (rem_fries > 0) {
        int price = rem_fries * PRICE_FRIES;
        printf("%-10s\t%d\t%d\t%d\n", "����Ƣ��", PRICE_FRIES, rem_fries, price);
        total_price += price;
    }
    // ���� �ݶ� ��� �� ���
    if (rem_coke > 0) {
        int price = rem_coke * PRICE_COKE;
        printf("%-10s\t%d\t%d\t%d\n", "�ݶ�", PRICE_COKE, rem_coke, price);
        total_price += price;
    }

    printf("--------------------------------------\n");
    printf("�հ�\t\t\t\t%d\n", total_price);

    return 0;
}