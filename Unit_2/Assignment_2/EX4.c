/*
 *    EX4.c
 *
 * Created on Wed Jul 17 2024 6:34:03 PM
 *       Author: Mina Waguih
 *
 * Description: Check if a number is positive, negative or zero.
 */

#include <stdio.h>

int main()
{
    float x;
    printf("Enter a number: ");
    scanf("%f", &x);
    if (x > 0)
    {
        printf("%f is a positive number.\n", x);
    }
    else if (x < 0)
    {
        printf("%f is a negative number.\n", x);
    }
    else
    {
        printf("%f is zero.\n", x);
    }
}