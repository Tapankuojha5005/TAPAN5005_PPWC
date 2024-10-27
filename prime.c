#include <stdio.h>
int main() {
    int num, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0; 
    } else {
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime) {
        printf("%d is a prime number.", num);
    } else {
        printf("%d is not a prime number.", num);
    }
    return 0;
}

