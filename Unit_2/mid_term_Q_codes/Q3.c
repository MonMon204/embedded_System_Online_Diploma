/*
 *    Q3.c
 *
 * Created on Mon Jul 29 2024 6:09:38 PM
 *       Author: Mina Waguih
 *
 * Description: C function that prints all prime numbers between two given numbers.
 */


#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    
    return true;
}

void printPrimes(int start, int end) {
    printf("Prime numbers between %d and %d are: ", start, end);
    
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
}

int main() {
    int start, end;
    
    printf("Enter the starting number: ");
    scanf("%d", &start);
    
    printf("Enter the ending number: ");
    scanf("%d", &end);
    
    printPrimes(start, end);
    
    return 0;
}