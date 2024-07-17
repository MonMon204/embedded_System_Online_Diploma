/*
 *    EX7.c
 *
 * Created on Wed Jul 17 2024 6:46:23 PM
 *       Author: Mina Waguih
 *
 * Description: Find the factorial of a number.
 */

#include <stdio.h>

int factorial(int x);

int main()
{
    int x, result = 1;
    printf("Enter an integer: ");
    scanf("%d", &x);
    if (x < 0)
    {
        printf("ERROR !!! factorial of a negative number doesn't exist.\n");
    }
    else if (x == 0)
    {
        printf("The factorial of 0 is 1.\n");
    }
    else
    {
        result = factorial(x);
        printf("The factorial of %d = %d\n", x, result);
    }
    
}

int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}