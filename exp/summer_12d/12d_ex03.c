#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int val_id(const char* id);

// 복습(사용자로부터 입력받아 저장하는 배열과 문자열)
int main(void) {
	// NULL을 포함해서 id가 20자리까지 입력받을 수 있도록 문자열 배열을 설정한다.
	char id[20];

	// 아이디를 입력받아 참이 되기 전까지 무한 반복을 실행한다.
	while (1) {
		printf("아이디를 입력하세요: ");
		scanf("%s", id);

		// val_id 함수에서 조건문에 걸리지 않는 경우가 참이 되어 printf문을 출력한다.
		if (val_id(id) == 1) {
			printf("%s는 사용 가능한 아이디입니다.\n", id);
			break;
		}
		else {
			printf("사용 불가한 아이디입니다. 다시 입력해주세요.\n");
		}
	}

	return 0;
}

int val_id(const char* id) {
	int len = strlen(id);
	int flag = 1;

	if (len < 8) {
		printf("아이디는 최소 8자리 이상이어야 합니다.\n");
		flag = 0;
	}
	
	if (!isalpha(id[0])) {
		if (len == 0) {
			printf("아이디가 입력되지 않았습니다.\n");
		}
		else {
			printf("아이디는 영문자로 시작해야 합니다.\n");
		}
		flag = 0;
	}

	// id 배열에서 입력된 문자들을 하나씩 검사하며 확인하는 반복문이 필요하다.
	for (int i = 0; i < len; i++) {
		if (!isalnum(id[i])) {
			printf("아이디는 영문자와 숫자로만 구성되야 합니다.\n");
			flag = 0;
			break;
		}
	}

	return flag;
}