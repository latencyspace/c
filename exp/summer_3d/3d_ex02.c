#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int hour, min, sec;
    int video_sec;

    printf("������ ��� �ð��� �� ������ �Է��ϼ���: ");
    scanf("%d", &video_sec);

    hour = video_sec / 3600;
    min = (video_sec % 3600) / 60;
    sec = video_sec % 60;

    printf("������ ��� �ð��� %d�ð� %d�� %d�� �Դϴ�.", hour, min, sec);
    return 0;
}