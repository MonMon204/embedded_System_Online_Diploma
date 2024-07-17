/*
 *    EX1.c
 *
 * Created on Wed Jul 17 2024 6:20:45 PM
 *       Author: Mina Waguih
 *
 * Description: Check if an integer is even or odd.
 */

#include <stdio.h>

int main() {
    int x;
    printf("Enter an integer you want to check: ");
    scanf("%d", &x);
    if (x % 2 == 0) {
        printf("%d is an even number.\n", x);
    } 
    else {
        printf("%d is an odd number.\n", x);
    }
    return 0;
}