#include <stdio.h>
int main()
{
    float bs, gs, da, hra,emi; 
    //bs=Base salary , gs=Grosssalary , da=Dearness Allowance , hra=House Rent Allowance
    
    printf("Enter ther base salary of an employee: ");
    scanf("%f", &bs);
     emi = bs * 0.05;

    if (bs <= 15000)
    {
        hra = bs * 0.1;
        da  = bs * 0.85;
        
    }
    else if (bs <= 25000)
    {
        da  = bs * 0.7;
        hra = bs * 0.25;
     }
    else
    {
        da  = bs * 0.65;
        hra = bs * 0.3;
        
    }
    gs = bs + hra + da + emi;
    printf("The Gross salary of the employee = %.2f", gs);

    return 0;
}
