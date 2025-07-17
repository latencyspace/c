#include <stdio.h>

struct Person {
	char name[50];
	int age;
};

int main(void) {
	struct Person p1 = { "Alice", 25 };
	struct Person p2 = { "Bob", 30 };
	struct Person p3 = { "Charlie", 28 };

	struct Person *p_ptrs[3];

	p_ptrs[0] = &p1;
	p_ptrs[1] = &p2;
	p_ptrs[2] = &p3;

	for (int i = 0; i < 3; i++) {
		printf("%s: %d\n", p_ptrs[i]->name, p_ptrs[i]->age);
	}

	return 0;
}