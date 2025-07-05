#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int hour, min, sec;
    int video_sec;

    printf("영상의 재생 시간을 초 단위로 입력하세요: ");
    scanf("%d", &video_sec);

    hour = video_sec / 3600;
    min = (video_sec % 3600) / 60;
    sec = video_sec % 60;

    printf("영상의 재생 시간은 %d시간 %d분 %d초 입니다.", hour, min, sec);
    return 0;
}