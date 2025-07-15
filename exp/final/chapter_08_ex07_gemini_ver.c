#include <stdio.h>

#define SIZE 5

void swap_array(int a[], int b[], int size);
void print_array(const char* name, int arr[], int size);

int main(void) {
    int a[SIZE] = { 1, 3, 5, 7, 9 };
    int b[SIZE] = { 0, 2, 4, 6, 8 };

    print_array("a 배열:", a, SIZE);
    print_array("b 배열:", b, SIZE);

    printf("<< swap_array 호출 후 >>\n");

    swap_array(a, b, SIZE);

    print_array("a 배열:", a, SIZE);
    print_array("b 배열:", b, SIZE);

    return 0;
}

void swap_array(int a[], int b[], int size) {
    int temp;

    for (int i = 0; i < size; i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

void print_array(const char* name, int arr[], int size) {
    printf("%s ", name);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}