/*
 *    Q2.c
 *
 * Created on Mon Jul 29 2024 6:07:47 PM
 *       Author: Mina Waguih
 *
 * Description: C function that return the square root of a given number.
 */

#include <stdio.h>
#include <math.h>

double calculateSquareRoot(int number) {
    double result = sqrt(number);
    return result;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    double squareRoot = calculateSquareRoot(number);
    printf("Square root of %d is %.2f\n", number, squareRoot);
    
    return 0;
}