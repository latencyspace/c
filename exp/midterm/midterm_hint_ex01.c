#include <stdio.h>

int main(void) {
	/*
	printf("%3c\n", '*');
	printf("%4s\n", "***");
	printf("%5s\n", "**C**");
	printf("%4s\n", "***");
	printf("%3c\n", '*');
	*/

    int i, j;
    int size = 5; // 패턴의 전체 높이(줄 수)
    int middle = size / 2; // 중간 줄의 인덱스 (0, 1, '2', 3, 4)

    // 각 줄을 만드는 외부 for문
    for (i = 0; i < size; i++) {
        // 1. 필요한 공백 수 계산
        int distance_from_middle = abs(i - middle); // 중간 줄로부터의 거리
        int num_stars = size - 2 * distance_from_middle;
        int num_spaces = (size - num_stars) / 2;

        // 2. 공백 먼저 출력
        for (j = 0; j < num_spaces; j++) {
            printf(" ");
        }

        // 3. 별 또는 'C'가 포함된 문자열 출력
        if (i == middle) { // 중간 줄일 경우
            printf("**C**");
        }
        else { // 그 외의 줄일 경우
            for (j = 0; j < num_stars; j++) {
                printf("*");
            }
        }

        // 4. 한 줄 출력이 끝났으므로 줄바꿈
        printf("\n");
    }

    return 0;
}