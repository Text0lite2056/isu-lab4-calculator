#include <stdio.h>

void add() {
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d\n", a + b);
}

void subtract() {
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    if (b != 0) {
        printf("Result: %d\n", a - b);
    } else {
        printf("Error: b=0\n");
    }
}

void multiply() {
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d\n", a * b);
}

int main() {
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            add();
        } else if (choice == 2) {
            subtract();
        } else if (choice == 3) {
            multiply();
        } else if (choice == 4) {
            printf("Bye\n");
        } else {
            printf("Invalid choice\n");
        }
    } while (choice != 4);

    return 0;
}