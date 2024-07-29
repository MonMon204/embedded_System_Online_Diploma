/*
 *    Q7.c
 *
 * Created on Mon Jul 29 2024 6:27:58 PM
 *       Author: Mina Waguih
 *
 * Description: C function that return the sum of numbers from 1 to 100.
 */

#include <stdio.h>

int sumNumbers(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sumNumbers(n - 1);
    }
}

int main() {
    int sum = sumNumbers(100);
    printf("The sum of numbers from 1 to 100 is: %d\n", sum);
    return 0;
}