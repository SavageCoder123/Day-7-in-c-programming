#include <stdio.h>

struct book {
    char book_name[50];
    char author_name[50];
    int ISBN_No;
    int price;
};

int main() {
    struct book books[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter book details: \n");
        printf("**********************\n");

        printf("Enter name of the book: ");
        getchar();  // To consume the newline left by previous input
        fgets(books[i].book_name, sizeof(books[i].book_name), stdin);

        printf("Enter name of the Author: ");
        fgets(books[i].author_name, sizeof(books[i].author_name), stdin);

        printf("Enter the ISBN number: ");
        scanf("%d", &books[i].ISBN_No);

        printf("Enter price of the book: ");
        scanf("%d", &books[i].price);
    }

    printf("\nPrint Details:\n");
    printf("************************\n");

    for (int i = 0; i < 5; i++) {
        printf("Book Name: %s", books[i].book_name);
        printf("Author: %s", books[i].author_name);
        printf("ISBN No: %d\n", books[i].ISBN_No);
        printf("Price: %d\n", books[i].price);
        printf("----------------------------\n");
    }

    return 0;
}
