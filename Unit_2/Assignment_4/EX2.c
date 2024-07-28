/*
 *    EX2.c
 *
 * Created on Mon Jul 29 2024 12:03:14 AM
 *       Author: Mina Waguih
 *
 * Description: Calculate the factorial of a positive number using recursion.
 */

#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
        return 1;
    else if (n < 0)
    {
        printf("Error! Factorial of a negative number doesn't exist.");
        return -1;
    }
    
    return n * factorial(n - 1);
}

int main()
{
    int n, result;
    printf("Enter an positive number: ");
    scanf("%d", &n);
    result = factorial(n);
    if (result != -1)
    {
        printf("Factorial of %d = %d\n", n, result);
    }
    return 0;
}
