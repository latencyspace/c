#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pw_len(char* pw);

int main(void) {
    char* password[100];

    printf("++++++++++++++++++++++++++++++\n");
    printf("�н����� ������ �׽�Ʈ\n");
    printf("++++++++++++++++++++++++++++++\n");
    printf("�н����带 �Է��Ͻÿ�>> ");
    scanf("%s", password);

    pw_len(password);

    return 0;
}

void pw_len(char* pw) {
    int len = strlen(pw); // ��
    char* level; // ��

    if (len >= 9) {
        level = "����";
    }
    else if (len >= 5 && len < 9) {
        level = "����";
    }
    else {
        level = "����";
    }

    printf("��й�ȣ : %s\n", level);
}
