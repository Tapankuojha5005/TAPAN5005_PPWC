#include<stdio.h>
int main() {
    int num, res = 0, pos = 1;
    printf("Enter a number in 0's and 1's: ");
    scanf("%d", &num);

    while (num > 0) {
        int digit = num % 10;
        if (digit == 0) {
            digit = 1;
        }
        else if (digit == 1) {
            digit = 0;
        }
        res += digit * pos;
        pos *= 10;
        num /= 10;
    }
    printf("The given number replacement is: %d\n", res);
    return 0;
}
