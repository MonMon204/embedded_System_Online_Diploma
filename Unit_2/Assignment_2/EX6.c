/*
 *    EX6.c
 *
 * Created on Wed Jul 17 2024 6:39:15 PM
 *       Author: Mina Waguih
 *
 * Description: Find the sum of the first n natural numbers.
 */

#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("The sum of the first %d natural numbers is %d\n", n, sum);
    
}