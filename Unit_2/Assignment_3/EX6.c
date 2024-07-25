/*
 *    EX6.c
 *
 * Created on Thu Jul 25 2024 5:00:35 PM
 *       Author: Mina Waguih
 *
 * Description: C program to find the frequency of a character in a string.
 */

#include <stdio.h>

int main()
{
    char a[1000], ch;
    int freq = 0;
    printf("Enter a string: ");
    gets(a);
    printf("Enter the character to find frequency: ");
    scanf("%c", &ch);
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == ch)
        {
            freq++;
        }
    }
    printf("Frequency of %c is %d", ch, freq);
    return 0;
}