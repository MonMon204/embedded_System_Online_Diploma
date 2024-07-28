/*
 *    EX4.c
 *
 * Created on Mon Jul 29 2024 12:11:42 AM
 *       Author: Mina Waguih
 *
 * Description: Calculate the power of a number using recursion.
 */

#include <stdio.h>

long long calPower(int base, int power)
{
    if (power != 0)
        return (base * calPower(base, power - 1));
    else
        return 1;
}

int main()
{
    int base, power;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter power number(positive integer): ");
    scanf("%d", &power);
    if (power < 0)
    {
        printf("Error! Enter a positive integer.");
    }
    else
    {
        printf("%d^%d = %lld", base, power, calPower(base, power));
    }

    return 0;
}
