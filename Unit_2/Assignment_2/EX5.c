/*
 *    EX5.c
 *
 * Created on Wed Jul 17 2024 6:35:56 PM
 *       Author: Mina Waguih
 *
 * Description: Check if a character is an alphabet or not.
 */

#include <stdio.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf("%c is an alphabet.\n", c);
    }
    else
    {
        printf("%c is not an alphabet.\n", c);
    }
}