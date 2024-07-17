/*
 *    EX7.c
 *
 * Created on Wed Jul 17 2024 6:10:20 PM
 *       Author: Mina Waguih
 *
 * Description: Swapping two numbers without using a temporary variable.
 */

#include <stdio.h>

int main() {
    float a, b;
    printf("Enter value of a: ");
    scanf("%f", &a);
    printf("Enter value of b: ");
    scanf("%f", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping, value of a = %f\n", a);
    printf("After swapping, value of b = %f\n", b);
    return 0;
}