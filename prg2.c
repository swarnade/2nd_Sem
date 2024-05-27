#include <stdio.h>
void main()
{
    int amount;
    int discount=0;
    printf("Enter Purchase Amount");
    scanf("%d", &amount);
    if (amount >= 10001)
    {
        discount = 15;
    }
    else if (amount >= 5001 && amount <= 10000)
    {
        discount = 10;
    }
    else if (amount >= 2001 && amount <= 5000)
    {
        discount = 5;
    }
    else
    {
        discount = 0;
    }
    double total_discount=(discount*amount)/100;
    printf("The Discount is %f\n", total_discount);
    printf("The Grade Obtained by Student is %f", amount-total_discount);
}