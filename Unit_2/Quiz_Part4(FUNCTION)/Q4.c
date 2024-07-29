/*
 *    Q4.c
 *
 * Created on Mon Jul 29 2024 2:52:29 PM
 *       Author: Mina Waguih
 *
 * Description: Convert a decimal number stored as an ASCII array to an unsigned integer
 */

#include <stdio.h>
#include <stdlib.h>

unsigned int asciiToUnsignedInt(char* asciiArray) {
    unsigned int result = 0;
    int i = 0;

    while (asciiArray[i] != '\0') {
        result = result * 10 + (asciiArray[i] - '0');
        i++;
    }

    return result;
}

int main() {
    char asciiArray[100];
    printf("Enter a decimal number as a string: ");
    gets(asciiArray);
    
    unsigned int number = asciiToUnsignedInt(asciiArray);

    printf("Unsigned integer: %u\n", number);

    return 0;
}