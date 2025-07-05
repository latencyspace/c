/* 컴파일하려면 이전 프로젝트(summer_1d)를 우클릭 후 '프로젝트 언로드'를 클릭하고
현재 실행하려는 프로젝트(summer_2d)를 우클릭 후 '시작 프로젝트로 설정' 클릭 후 컴파일 진행 */ 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int y, m, d;

    printf("연? ");
    scanf("%d", &y);

    printf("월? ");
    scanf("%d", &m);

    printf("일? ");
    scanf("%d", &d);

    printf("입력한 날짜는 %d년 %d월 %d일 입니다.\n", y, m, d);

    return 0;
}