#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the Book structure
struct Book {
    int id;
    char title[50];
    char author[50];
    int quantity;
    float price;
};

// Function prototypes
void addBook();
void viewBooks();
void searchBook();
void updateBook();
void deleteBook();
void calculateInventoryValue();
int isBookIDExist(int id);

FILE *file;

int main() {
    int choice;

    do {
        printf("\n============================\n");
        printf("Library Management System\n");
        printf("============================\n");
        printf("1. Add New Book\n");
        printf("2. View All Books\n");
        printf("3. Search Book by ID or Title\n");
        printf("4. Update Book Details\n");
        printf("5. Delete Book\n");
        printf("6. Calculate Total Inventory Value\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addBook(); break;
            case 2: viewBooks(); break;
            case 3: searchBook(); break;
            case 4: updateBook(); break;
            case 5: deleteBook(); break;
            case 6: calculateInventoryValue(); break;
            case 7: printf("Exiting the program.\n"); break;
            default: printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 7);

    return 0;
}

int isBookIDExist(int id) {
    struct Book book;
    file = fopen("books.txt", "r");
    if (file == NULL) return 0;

    while (fread(&book, sizeof(struct Book), 1, file)) {
        if (book.id == id) {
            fclose(file);
            return 1;
        }
    }
    fclose(file);
    return 0;
}

void addBook() {
    struct Book book;

    printf("Enter Book ID: ");
    scanf("%d", &book.id);

    if (isBookIDExist(book.id)) {
        printf("Book ID already exists! Try again.\n");
        return;
    }

    printf("Enter Title: ");
    scanf(" %[^\n]s", book.title);
    printf("Enter Author: ");
    scanf(" %[^\n]s", book.author);
    printf("Enter Quantity: ");
    scanf("%d", &book.quantity);
    printf("Enter Price: ");
    scanf("%f", &book.price);

    if (book.quantity < 0 || book.price < 0) {
        printf("Quantity and Price cannot be negative!\n");
        return;
    }

    file = fopen("books.txt", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    fwrite(&book, sizeof(struct Book), 1, file);
    fclose(file);

    printf("Book added successfully!\n");
}

void viewBooks() {
    struct Book book;
    file = fopen("books.txt", "r");

    if (file == NULL) {
        printf("No records found.\n");
        return;
    }

    fseek(file, 0, SEEK_END);
    if (ftell(file) == 0) {  // Check if the file is empty
        printf("No records to display.\n");
        fclose(file);
        return;
    }
    rewind(file);

    printf("\nBook Records:\n");
    printf("ID\t%-20s\t%-20s\tQuantity\tPrice\n", "Title", "Author");

    while (fread(&book, sizeof(struct Book), 1, file)) {
        printf("%d\t%-20s\t%-20s\t%d\t\t%.2f\n", book.id, book.title, book.author, book.quantity, book.price);
    }

    fclose(file);
}

void searchBook() {
    struct Book book;
    int searchID, found = 0;
    char searchTitle[50];

    printf("Search by:\n1. ID\n2. Title\nEnter choice: ");
    int choice;
    scanf("%d", &choice);

    file = fopen("books.txt", "r");
    if (file == NULL) {
        printf("No records found.\n");
        return;
    }

    fseek(file, 0, SEEK_END);
    if (ftell(file) == 0) {  // Check for empty file
        printf("No records found.\n");
        fclose(file);
        return;
    }
    rewind(file);

    if (choice == 1) {
        printf("Enter Book ID: ");
        scanf("%d", &searchID);

        while (fread(&book, sizeof(struct Book), 1, file)) {
            if (book.id == searchID) {
                found = 1;
                printf("ID: %d, Title: %s, Author: %s, Quantity: %d, Price: %.2f\n",
                       book.id, book.title, book.author, book.quantity, book.price);
                break;
            }
        }
    } else if (choice == 2) {
        printf("Enter Title: ");
        scanf(" %[^\n]s", searchTitle);

        while (fread(&book, sizeof(struct Book), 1, file)) {
            if (strcasecmp(book.title, searchTitle) == 0) {  // Case-insensitive comparison
                found = 1;
                printf("ID: %d, Title: %s, Author: %s, Quantity: %d, Price: %.2f\n",
                       book.id, book.title, book.author, book.quantity, book.price);
                break;
            }
        }
    } else {
        printf("Invalid choice.\n");
    }

    if (!found) {
        printf("Book not found.\n");
    }

    fclose(file);
}

void updateBook() {
    struct Book book;
    int updateID, found = 0;

    printf("Enter Book ID to update: ");
    scanf("%d", &updateID);

    file = fopen("books.txt", "r+");
    if (file == NULL) {
        printf("No records found.\n");
        return;
    }

    while (fread(&book, sizeof(struct Book), 1, file)) {
        if (book.id == updateID) {
            found = 1;

            printf("Enter new Quantity: ");
            scanf("%d", &book.quantity);
            printf("Enter new Price: ");
            scanf("%f", &book.price);

            if (book.quantity < 0 || book.price < 0) {
                printf("Quantity and Price cannot be negative!\n");
                fclose(file);
                return;
            }

            fseek(file, -sizeof(struct Book), SEEK_CUR);
            fwrite(&book, sizeof(struct Book), 1, file);
            printf("Book updated successfully!\n");
            break;
        }
    }

    if (!found) {
        printf("Book not found.\n");
    }

    fclose(file);
}

void deleteBook() {
    struct Book book;
    int deleteID, found = 0;

    printf("Enter Book ID to delete: ");
    scanf("%d", &deleteID);

    FILE *tempFile = fopen("temp.txt", "w");
    file = fopen("books.txt", "r");

    if (file == NULL || tempFile == NULL) {
        printf("Error opening file.\n");
        return;
    }

    while (fread(&book, sizeof(struct Book), 1, file)) {
        if (book.id == deleteID) {
            found = 1;
        } else {
            fwrite(&book, sizeof(struct Book), 1, tempFile);
        }
    }

    fclose(file);
    fclose(tempFile);

    remove("books.txt");
    rename("temp.txt", "books.txt");

    if (found) {
        printf("Book deleted successfully!\n");
    } else {
        printf("Book not found.\n");
    }
}

void calculateInventoryValue() {
    struct Book book;
    float totalValue = 0;

    file = fopen("books.txt", "r");
    if (file == NULL) {
        printf("No records found.\n");
        return;
    }

    while (fread(&book, sizeof(struct Book), 1, file)) {
        totalValue += book.quantity * book.price;
    }

    fclose(file);
    printf("Total Inventory Value: %.2f\n", totalValue);
}

