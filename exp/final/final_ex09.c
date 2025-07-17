#include <stdio.h>

int main(void) {
	const char* fruits[3] = { "Apple", "Banana", "Cherry" };

	for (int i = 0; i < 3; i++) {
		printf("%s\n", fruits[i]);
	}

	return 0;
}