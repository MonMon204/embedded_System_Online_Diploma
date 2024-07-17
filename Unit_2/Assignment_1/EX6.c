/*
 *    EX6.c
 *
 * Created on Wed Jul 17 2024 6:08:59 PM
 *       Author: Mina Waguih
 *
 * Description: Swapping two numbers using a temporary variable.
 */

#include <stdio.h>

int main() {
    float a, b;
    printf("Enter value of a: ");
    scanf("%f", &a);
    printf("Enter value of b: ");
    scanf("%f", &b);
    float temp = a;
    a = b;
    b = temp;
    printf("After swapping, value of a = %f\n", a);
    printf("After swapping, value of b = %f\n", b);
    return 0;
}