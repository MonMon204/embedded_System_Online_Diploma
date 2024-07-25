/*
 *    EX7.c
 *
 * Created on Thu Jul 25 2024 5:13:34 PM
 *       Author: Mina Waguih
 *
 * Description: C program to find the length of a string.
 */

#include <stdio.h>

int main()
{
    char a[1000];
    int length = 0;
    printf("Enter a string: ");
    gets(a);
    for (int i = 0; a[i] != '\0'; i++)
    {
        length++;
    }
    printf("Length of the string: %d", length);
    return 0;
}
