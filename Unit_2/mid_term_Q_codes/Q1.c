/*
 *    Q1.c
 *
 * Created on Mon Jul 29 2024 5:42:53 PM
 *       Author: Mina Waguih
 *
 * Description: C function that return the sum of the digits of a given number.
 */


#include <stdio.h>

int sumDigits(int number) {
    int sum = 0;
    
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    
    return sum;
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int sum = sumDigits(number);
    
    printf("Sum of digits: %d\n", sum);
    
    return 0;
}