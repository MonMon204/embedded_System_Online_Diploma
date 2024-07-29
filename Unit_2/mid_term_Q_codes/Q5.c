/*
 *    Q5.c
 *
 * Created on Mon Jul 29 2024 6:17:07 PM
 *       Author: Mina Waguih
 *
 * Description: C function that returns the number of ones in the binary representation of a given number.
 */

#include <stdio.h>

int countOnes(int num) {
    int count = 0;
    
    while (num != 0) {
        if (num & 1) {
            count++;
        }
        num >>= 1;
    }
    
    return count;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int ones = countOnes(num);
    printf("Number of ones in the binary number: %d\n", ones);
    
    return 0;
}