/*
 *    EX8.c
 *
 * Created on Thu Jul 25 2024 5:18:25 PM
 *       Author: Mina Waguih
 *
 * Description: C program to reverse a string.
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000], rev[1000];
    int length = 0;
    printf("Enter a string : ");
    gets(a);
    length = strlen(a);
    for (int i = 0; a[i] != '\0'; i++)
    {
        rev[i] = a[length - i - 1];
    }
    rev[length] = '\0';
    printf("Reversed string: %s", rev);
    return 0;
}
