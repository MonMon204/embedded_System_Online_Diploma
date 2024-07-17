/*
 *    EX2.c
 *
 * Created on Wed Jul 17 2024 6:23:03 PM
 *       Author: Mina Waguih
 *
 * Description: Check if a character is a vowel or a consonant.
 */

#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("%c is a vowel.\n", c);
        break;
    
    default:
        printf("%c is a consonant.\n", c);
        break;
    }
    return 0;
}