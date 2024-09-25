#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    int BookID;
    char BookName[50];
    char Author[50];
    float Rating;
    float Price;
};

void AddBook(struct Book *book);
void AddBooks(struct Book **books, int *n, int count);
void DisplayBook(struct Book *books, int n);
int Search(struct Book *books, int n, char *query);
void Update(struct Book *books, int n);
void Delete(struct Book *books, int *n);

int main() {
    int choice, n = 0;
    struct Book *books = NULL;

    while (1) {
        printf("\n--------------------+");
        printf("\n1. Add books\n");
        printf("2. Display all books\n");
        printf("3. Search a book\n");
        printf("4. Update a book\n");
        printf("5. Delete a book\n");
        printf("6. Exit\n");
        printf("--------------------+");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        printf("-----------------+\n");

        switch (choice) {
            case 1: {
                int count;
                printf("\nHow many books do you want to add? ");
                scanf("%d", &count);
                AddBooks(&books, &n, count);
                printf("\nBooks added successfully!\n");
                break;
            }

            case 2:
                DisplayBook(books, n);
                break;

            case 3: {
                char query[50];
                printf("Enter BookID to search: ");
                scanf("%s", query);
                if (!Search(books, n, query)) {
                    printf("No books found.\n");
                }
                break;
            }

            case 4:
                Update(books, n);
                break;

            case 5:
                Delete(books, &n);
                break;

            case 6:
                free(books);
                exit(0);

            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}

void AddBook(struct Book *book) {
    printf("\nEnter BookID: ");
    scanf("%d", &book->BookID);
    printf("Enter BookName: ");
    scanf("%s", book->BookName);
    printf("Enter Author: ");
    scanf("%s", book->Author);
    printf("Enter Rating: ");
    scanf("%f", &book->Rating);
    printf("Enter Price: ");
    scanf("%f", &book->Price);
}

void AddBooks(struct Book **books, int *n, int count) {
    *books = realloc(*books, (*n + count) * sizeof(struct Book));
    for (int i = 0; i < count; i++) {
        AddBook(&(*books)[*n + i]);
    }
    *n += count;
}

void DisplayBook(struct Book *books, int n) {
    if (n == 0) {
        printf("No books available.\n");
    } else {
        for (int i = 0; i < n; i++) {
            printf("\nBookID: %d", books[i].BookID);
            printf("\nBookName: %s", books[i].BookName);
            printf("\nAuthor: %s", books[i].Author);
            printf("\nRating: %.2f", books[i].Rating);
            printf("\nPrice: %.2f", books[i].Price);
        }
    }
}

int Search(struct Book *books, int n, char *query) {
    int found = 0;
    int bookID = atoi(query);
    for (int i = 0; i < n; i++) {
        if (books[i].BookID == bookID) {
            printf("\nBookID: %d", books[i].BookID);
            printf("\nBookName: %s", books[i].BookName);
            printf("\nAuthor: %s", books[i].Author);
            printf("\nRating: %.2f", books[i].Rating);
            printf("\nPrice: %.2f", books[i].Price);
            found = 1;
        }
    }
    return found;
}

void Update(struct Book *books, int n) {
    int bookID, found = 0;
    printf("Enter the BookID to update: ");
    scanf("%d", &bookID);

    for (int i = 0; i < n; i++) {
        if (books[i].BookID == bookID) {
            printf("Enter new details:\n");
            AddBook(&books[i]);
            found = 1;
            printf("\nBook updated successfully!\n");
            break;
        }
    }

    if (!found) {
        printf("Book not found.\n");
    }
}

void Delete(struct Book *books, int *n) {
    int bookID, found = 0;
    printf("Enter the BookID to delete: ");
    scanf("%d", &bookID);

    for (int i = 0; i < *n; i++) {
        if (books[i].BookID == bookID) {
            found = 1;
            for (int j = i; j < *n - 1; j++) {
                books[j] = books[j + 1];
            }
            (*n)--;
            books = realloc(books, (*n) * sizeof(struct Book));
            printf("\nBook deleted successfully!\n");
            break;
        }
    }

    if (!found) {
        printf("Book not found.\n");
    }
}
