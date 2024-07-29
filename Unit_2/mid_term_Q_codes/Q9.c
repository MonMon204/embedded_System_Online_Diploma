/*
 *    Q9.c
 *
 * Created on Mon Jul 29 2024 6:32:55 PM
 *       Author: Mina Waguih
 *
 * Description: c function to reverse words in string
 */

#include <stdio.h>
#include <string.h>

void reverseWords(char* str) {
    int start = 0;
    int end = 0;
    int length = strlen(str);

    // Reverse the entire string
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    // Reverse each word in the string
    while (end < length) {
        if (str[end] != ' ') {
            start = end;
            while (str[end] != ' ' && str[end] != '\0') {
                end++;
            }
            int wordLength = end - start;

            // Reverse the word
            for (int i = 0; i < wordLength / 2; i++) {
                char temp = str[start + i];
                str[start + i] = str[end - i - 1];
                str[end - i - 1] = temp;
            }
        } else {
            end++;
        }
    }
}

int main() {
    char str[] = "mohamed gamal";

    printf("Original string: %s\n", str);
    reverseWords(str);
    printf("Reversed words: %s\n", str);

    return 0;
}