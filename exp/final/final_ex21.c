#include <stdio.h>

struct Person {
    char name[20];
    int age;
};

void swap(struct Person* a, struct Person* b) {
    struct Person temp = *a;
    *a = *b;
    *b = temp;
}

void sort_by_age(struct Person arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j].age > arr[j + 1].age) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main(void) {
    struct Person people[3] = {
        {"Alice", 30},
        {"Bob", 25},
        {"Charlie", 28}
    };
    int size = 3;

    sort_by_age(people, size);

    for (int i = 0; i < size; i++) {
        printf("%s: %d\n", people[i].name, people[i].age);
    }

    return 0;
}