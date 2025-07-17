#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STR 128

int* extend_arr(const int* arr, int size);

int main(void) {
    int arr[5] = { 1, 3, 5, 7, 9 };
    int* parr = NULL;

    parr = extend_arr(arr, 5);

    for (int i = 0; i < 10; i++) {
        printf("%d ", parr[i]);
    }
    printf("\n");

    free(parr);
    parr = NULL;

    return 0;
}

int* extend_arr(const int* arr, int size) {
    int* p = NULL;
    p = (int*)malloc(sizeof(int) * 2 * size);

    for (int i = 0; i < (2 * size); i++) {
        p[i * 2] = arr[i];
        p[i * 2 + 1] = arr[i];
    }

    return p;
}

/*
int* double_elements(int arr[], int size);
void print_array(const char* title, int arr[], int size);

int main(void) {
    int x[] = { 1, 3, 5, 7, 9 };
    int size = sizeof(x) / sizeof(x[0]);

    int* y = NULL;

    print_array("x배열:", x, size);

    y = double_elements(x, size);

    if (y != NULL) {
        print_array("y배열:", y, size * 2);

        free(y);
    }

    return 0;
}
int* double_elements(int arr[], int size) {
    int new_size = size * 2;

    int* new_arr = (int*)malloc(new_size * sizeof(int));

    if (new_arr == NULL) {
        return NULL;
    }

    for (int i = 0; i < size; i++) {
        new_arr[2 * i] = arr[i];
        new_arr[2 * i + 1] = arr[i];
    }

    return new_arr;
}

void print_array(const char* title, int arr[], int size) {
    printf("%s [", title);
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(" ");
        }
    }
    printf("]\n");
}
*/