/*
 *    Q5.c
 *
 * Created on Mon Jul 29 2024 2:23:30 PM
 *       Author: Mina Waguih
 *
 * Description: C function that clears a specified bit in a given number (bit number starts from 0), if not possible return the same number as is.
 */

#include <stdio.h>

int clearBit(int num, int bit)
{
    if (bit < 0)
        return num;
    return num & ~(1 << bit);
}

int main()
{
    int num, bit;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter bit position to clear: ");
    scanf("%d", &bit);
    printf("The number after clearing the bit is: %d", clearBit(num, bit));
    return 0;
}
