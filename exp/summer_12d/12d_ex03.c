#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int val_id(const char* id);

// ����(����ڷκ��� �Է¹޾� �����ϴ� �迭�� ���ڿ�)
int main(void) {
	// NULL�� �����ؼ� id�� 20�ڸ����� �Է¹��� �� �ֵ��� ���ڿ� �迭�� �����Ѵ�.
	char id[20];

	// ���̵� �Է¹޾� ���� �Ǳ� ������ ���� �ݺ��� �����Ѵ�.
	while (1) {
		printf("���̵� �Է��ϼ���: ");
		scanf("%s", id);

		// val_id �Լ����� ���ǹ��� �ɸ��� �ʴ� ��찡 ���� �Ǿ� printf���� ����Ѵ�.
		if (val_id(id) == 1) {
			printf("%s�� ��� ������ ���̵��Դϴ�.\n", id);
			break;
		}
		else {
			printf("��� �Ұ��� ���̵��Դϴ�. �ٽ� �Է����ּ���.\n");
		}
	}

	return 0;
}

int val_id(const char* id) {
	int len = strlen(id);
	int flag = 1;

	if (len < 8) {
		printf("���̵�� �ּ� 8�ڸ� �̻��̾�� �մϴ�.\n");
		flag = 0;
	}
	
	if (!isalpha(id[0])) {
		if (len == 0) {
			printf("���̵� �Էµ��� �ʾҽ��ϴ�.\n");
		}
		else {
			printf("���̵�� �����ڷ� �����ؾ� �մϴ�.\n");
		}
		flag = 0;
	}

	// id �迭���� �Էµ� ���ڵ��� �ϳ��� �˻��ϸ� Ȯ���ϴ� �ݺ����� �ʿ��ϴ�.
	for (int i = 0; i < len; i++) {
		if (!isalnum(id[i])) {
			printf("���̵�� �����ڿ� ���ڷθ� �����Ǿ� �մϴ�.\n");
			flag = 0;
			break;
		}
	}

	return flag;
}