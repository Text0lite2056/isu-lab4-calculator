#include <stdio.h>

int main() {
    int choice, a, b, r;
    do {
        printf("\nMenu:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter a and b: ");
            scanf("%d %d", &a, &b);
            r = a + b;
            printf("Result: %d\n", r);
        } else if (choice == 2) {
            printf("Enter a and b: ");
            scanf("%d %d", &a, &b);
            if (b != 0) {
                r = a - b;
                printf("Result: %d\n", r);
            } else {
                printf("Error: b=0\n");
            }
        } else if (choice == 3) {
            printf("Enter a and b: ");
            scanf("%d %d", &a, &b);
            r = a * b;
            printf("Result: %d\n", r);
        } else if (choice == 4) {
            printf("Bye\n");
        } else {
            printf("Invalid choice\n");
        }
    } while (choice != 4);

    return 0;
}