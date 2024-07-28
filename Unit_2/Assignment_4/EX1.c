/*
 *    EX1.c
 *
 * Created on Sun Jul 28 2024 11:57:17 PM
 *       Author: Mina Waguih
 *
 * Description: Print all odd numbers between two given numbers using recursion.
 */

#include <stdio.h>

void printOddNumbers(int n1, int n2)
{
    if (n1 == n2)
        return;
    if (n1 % 2 != 0)
        printf("%d ", n1);
    printOddNumbers(n1 + 1, n2);
}

int main()
{
    int n1, n2;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &n1, &n2);
    printOddNumbers(n1, n2);
    return 0;
}
