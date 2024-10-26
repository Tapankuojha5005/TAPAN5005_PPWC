#include <stdio.h>

int main() {
    int curr_year, joining_year, years_of_service;
    float bonus;

    printf("Enter current year and joining year:\n");
    scanf("%d %d", &curr_year, &joining_year);

    years_of_service = curr_year - joining_year;  

    if (years_of_service >= 3) {
        bonus = 25000;  
        printf("The bonus amount = %.2f\n", bonus); 
    } else {
        bonus = 0;
        printf("The bonus amount = %.2f\n", bonus);  
    }  

    return 0;
}
