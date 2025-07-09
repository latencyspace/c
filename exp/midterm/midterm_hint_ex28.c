#include <stdio.h>

int main(void) {
	int i = 1;

	while (1) {
		/*
		if (i >= 1 && i <= 105) {
			if (i % 10 == 5) {
				printf(" %d", i);
			}
			i++;
		}
		*/

		if (i > 105) {
			break;
		}

		if (i % 10 == 5) {
			printf(" %d", i);
		}
		i++;
	}

	return 0;
}