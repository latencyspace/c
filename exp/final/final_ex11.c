#include <stdio.h>

int main(void) {
	const char* words[3] = { "hello", "pointer", "array" };

	for (int i = 0; i < 3; i++) {
		printf("Length of %s: %d\n", words[i], strlen(words[i]));
	}

	return 0;
}