#include <stdio.h>

void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
}

int main() {
    int a[] = {5, 2, 9, 1, 5, 6};
    int n = 6;
    printf("Bubble Sort\n");
    printf("Before: ");
    printArray(a, n);
    bubbleSort(a, n);
    printf("After:  ");
    printArray(a, n);
    return 0;
}