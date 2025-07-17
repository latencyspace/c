#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define NUM_CUSTOMERS 3

struct customer_info {
    char name[20];
    char rrn[15];
    int reg_date;
};

void print_customer(struct customer_info cust) {
    char rrn_copy[15];
    char* gender;
    int year, month, day;

    strcpy(rrn_copy, cust.rrn);
    strtok(rrn_copy, "-");
    char* back_part = strtok(NULL, "-");

    if (back_part != NULL) {
        if (back_part[0] == '1' || back_part[0] == '3') {
            gender = "male";
        }
        else if (back_part[0] == '2' || back_part[0] == '4') {
            gender = "female";
        }
        else {
            gender = "unknown";
        }
    }
    else {
        gender = "invalid";
    }

    year = 2000 + (cust.reg_date / 10000);
    month = (cust.reg_date / 100) % 100;
    day = cust.reg_date % 100;

    printf("이름 : %s\n", cust.name);
    printf("성별 : %s\n", gender);
    printf("등록일 : %d년 %d월 %d일\n", year, month, day);
}

int main(void) {
    struct customer_info customers[NUM_CUSTOMERS];
    int i;

    for (i = 0; i < NUM_CUSTOMERS; i++) {
        printf("이름 입력>> ");
        scanf("%s", customers[i].name);

        printf("주민번호 입력>> ");
        scanf("%s", customers[i].rrn);

        printf("등록일 입력>> ");
        scanf("%d", &customers[i].reg_date);
    }

    printf("\n=============회원정보=============\n");
    for (i = 0; i < NUM_CUSTOMERS; i++) {
        print_customer(customers[i]);
        if (i < NUM_CUSTOMERS - 1) {
            printf("------------------------------\n");
        }
    }
    printf("==============================\n");

    return 0;
}