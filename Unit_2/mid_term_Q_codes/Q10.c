/*
 *    Q10.c
 *
 * Created on Mon Jul 29 2024 6:42:18 PM
 *       Author: Mina Waguih
 *
 * Description: C function that returns the maximum number of consecutive ones in the binary representation of a given number.
 */

#include <stdio.h>
#include <stdio.h>

int max_consecutive_ones(int num) {
  int max_count = 0;
  int current_count = 0;
  int prev_bit = 0;

  while (num > 0) {
    int current_bit = num & 1;

    if (current_bit == 1 && prev_bit == 0) {
      current_count = 1;
    } else if (current_bit == 1) {
      current_count++;
    } else {
      max_count = (current_count > max_count) ? current_count : max_count;
      current_count = 0;
    }

    prev_bit = current_bit;
    num >>= 1;
  }

  max_count = (current_count > max_count) ? current_count : max_count;

  return max_count;
}

int main() {
  int num1 = 14; // Binary: 01110
  int num2 = 110; // Binary: 01101110

  printf("Max consecutive ones in %d: %d\n", num1, max_consecutive_ones(num1));
  printf("Max consecutive ones in %d: %d\n", num2, max_consecutive_ones(num2));

  return 0;
}
