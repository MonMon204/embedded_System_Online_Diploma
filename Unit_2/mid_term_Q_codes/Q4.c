/*
 *    Q4.c
 *
 * Created on Mon Jul 29 2024 6:13:04 PM
 *       Author: Mina Waguih
 *
 * Description: c function to revers digits in number
 */

#include <stdio.h>

int reverseDigits(int num) {
    int reversedNum = 0;
    
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    
    return reversedNum;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int reversedNum = reverseDigits(num);
    printf("Reversed number: %d\n", reversedNum);
    
    return 0;
}