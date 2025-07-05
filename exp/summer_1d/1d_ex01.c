#include <stdio.h>

int main()
{
    char dept[100] = "지역바이오시스템공학과";
    int s_id = 184128;
    char name[20] = "박지환";

    printf("저는 %s에 재학중인 %d 학번 %s입니다.\n", dept, s_id, name);

    return 0;
}