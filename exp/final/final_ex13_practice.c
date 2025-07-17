#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void val_pw(char* pw);

int main(void) {
	char* password[50];

	printf("Enter your password: ");
	scanf("%s", password);

	val_pw(password);

	return 0;
}

void val_pw(char* pw) {
	int len = strlen(pw);
	int has_digit = 0;
	int has_upper = 0;
	int has_lower = 0;
	int has_special = 0;
	char* level;
	int score = 0;

	for (int i = 0; i < len; i++) {
		if (isdigit(pw[i])) {
			has_digit = 1;
		}
		else if (isupper(pw[i])) {
			has_upper = 1;
		}
		else if (islower(pw[i])) {
			has_lower = 1;
		}
		else {
			has_special = 1;
		}
	}

	score = has_digit + has_upper + has_lower + has_special;

	if (score == 4) {
		level = "Very Strong";
	}
	else if (score == 3) {
		level = "Strong";
	}
	else if (score == 2) {
		level = "Weak";
	}
	else {
		level = "Very Weak";
	}

	printf("Your Password: %s", level);
}