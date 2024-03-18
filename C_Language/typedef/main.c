#include <stdio.h>

int main() {
   typedef char LETTER;
   LETTER ch = 'A';
    printf("ch = %c \n", ch);


    struct book {
        char name[20];
        int price;
    };

    typedef struct book Book;

    Book b = {"c programming", 2000};
    printf("Book name = %s, Price = %d bdt", b.name, b.price);

    getch();
}
