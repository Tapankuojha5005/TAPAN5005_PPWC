#include <stdio.h>

void printArray(int* Arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", Arr[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

void merge(int A[], int low, int mid, int high) {
    int i = low, j = mid + 1, k = 0;
    int B[high - low + 1]; 
  
    while (i <= mid && j <= high) {
        if (A[i] < A[j]) {
            B[k++] = A[i++];
        } else {
            B[k++] = A[j++];
        }
    }
    while (i <= mid) {
        B[k++] = A[i++];
    }
    while (j <= high) {
        B[k++] = A[j++];
    }
    for (int m = 0; m < k; m++) {
        A[low + m] = B[m];
    }
}

void mergesort(int A[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergesort(A, low, mid);
        mergesort(A, mid + 1, high);
        merge(A, low, mid, high);
    }
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int A[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("The Original array is: ");
    printArray(A, n);
    mergesort(A, 0, n - 1); 
    printf("And the Sorted array is: ");
    printArray(A, n);

    return 0;
}
