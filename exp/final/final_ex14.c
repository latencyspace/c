#include <stdio.h>

struct Student {
	char name[10];
	int age;
};

int main(void) {
	struct Student student[3] = {
		{"홍길동", 25},
		{"김유신", 20},
		{"이순신", 21}
	};

	printf("--------학생 정보--------\n");
	
	for (int i = 0; i < 3; i++) {
		printf("이름 : %s, 나이 : %d\n", student[i].name, student[i].age);
	}

	return 0;
}