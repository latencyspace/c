#include <stdio.h>

struct Student {
	char name[10];
	int age;
};

int main(void) {
	struct Student student[3] = {
		{"ȫ�浿", 25},
		{"������", 20},
		{"�̼���", 21}
	};

	printf("--------�л� ����--------\n");
	
	for (int i = 0; i < 3; i++) {
		printf("�̸� : %s, ���� : %d\n", student[i].name, student[i].age);
	}

	return 0;
}