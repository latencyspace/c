#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct product {
	char name[30];
	int price;
	int stock;
};

// �Ű������� ����ü �����͸� �޵��� �ؾ� �Ѵ�.
void print_product(struct product *p);

int main(void) {
	struct product p1;

	printf("��ǰ��? ");
	scanf("%s", p1.name);
	printf("����? ");
	scanf("%d", &p1.price);
	printf("���? ");
	scanf("%d", &p1.stock);

	printf("\n");

	// �Լ��� p1�� �ƴ� �ּ� &p1�� �����ؾ� �Ѵ�.
	print_product(&p1);

	return 0;
}

void print_product(struct product *p) {
	// �����ͷ� ����� ������ �� -> �� ����Ѵ�.
	printf("[%s %d�� ���:%d]\n", p->name, p->price, p->stock);
}