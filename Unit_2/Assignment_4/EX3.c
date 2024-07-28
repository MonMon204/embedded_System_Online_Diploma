/*
 *    EX3.c
 *
 * Created on Mon Jul 29 2024 12:08:03 AM
 *       Author: Mina Waguih
 *
 * Description: Reverse a string using recursion.
 */

#include <stdio.h>

void reverseString(char *str)
{
    if (*str)
    {
        reverseString(str + 1);
        printf("%c", *str);
    }
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    reverseString(str);
    return 0;
}
