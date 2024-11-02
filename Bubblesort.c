#include <stdio.h>

void printArray(int* Arr, int n, char end) {
    for (int i = 0; i < n; i++) {
        printf("%d", Arr[i]);
        if (i < n - 1) {
            printf("%c ", end);
        }
    }
    printf("\n");
}

void Bubblesort(int *Arr, int n) {
    int temp;
    int isSorted;
    for (int i = 0; i < n - 1; i++) {
        isSorted = 1;
        for (int j = 0; j < n - 1 - i; j++) {
            if (Arr[j] > Arr[j + 1]) {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted) {
            return;
        }
    }
}
int main() {
    int n;

    printf("Enter the no of elements: ");
    scanf("%d", &n);
    int A[n]; 

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("The Original array is: ");
    printArray(A, n, ','); 
    Bubblesort(A, n); 
    printf("And the Sorted array is: ");
    printArray(A, n, ','); 
    
    return 0; 
}
