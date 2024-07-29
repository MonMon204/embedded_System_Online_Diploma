/*
 *    Q6.c
 *
 * Created on Mon Jul 29 2024 1:48:42 PM
 *       Author: Mina Waguih
 *
 * Description: The function return a binary integer (1.e.: 0 or 1) denoting the 4 least-significant bit of num.
 */

#include <stdio.h>

int get4thLSB(int num)
{
    if (num & 0b00001000)
        return 1;
    else
        return 0;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The 4th least significant bit is: %d", get4thLSB(num));
    return 0;
}
