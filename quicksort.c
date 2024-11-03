#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int start, int end) {
    int pivot = arr[end], i = start - 1;
    for (int j = start; j < end; j++) {
        if (arr[j] <= pivot) {
            swap(&arr[++i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[end]);
    return i + 1;
}
void quickSort(int arr[], int start, int end) {
    if (start < end) {
        int pi = partition(arr, start, end);
        quickSort(arr, start, pi - 1);
        quickSort(arr, pi + 1, end);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    if (i < size - 1) {
            printf(", ");
    }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the no of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The Original array is: ");
    printArray(arr, n);
    quickSort(arr, 0, n - 1);
    printf("And the Sorted array is : ");
    printArray(arr, n);
    return 0;
}
