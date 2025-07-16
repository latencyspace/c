#include <stdio.h>

struct Book {
    char title[50];
    int price;
};

int main(void) {
    struct Book book1 = { "CÇÁ·Î±×·¡¹Ö", 30000 };
    struct Book book2 = { "Easy µö·¯´×", 26000 };

    struct Book* book_ptrs[2];

    book_ptrs[0] = &book1;
    book_ptrs[1] = &book2;

    for (int i = 0; i < 2; i++) {
        printf("Title : %s  price : %d\n", book_ptrs[i]->title, book_ptrs[i]->price);
    }

    return 0;
}