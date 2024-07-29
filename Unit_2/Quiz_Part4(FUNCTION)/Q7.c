/*
 *    Q7.c
 *
 * Created on Mon Jul 29 2024 1:54:56 PM
 *       Author: Mina Waguih
 *
 * Description: C function that return 0 if a given number is a power of 3, otherwise return 1 (except 3 to the power 0)
 */

#include <stdio.h>

int isPowerOfThree(int n)
{
    if (n == 1)
        return 0;
    else if (n % 3 != 0 || n == 0)
        return 1;
    else
        return isPowerOfThree(n / 3);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d ==> %d", n, isPowerOfThree(n));
    return 0;
}
