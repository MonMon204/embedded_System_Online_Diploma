/*
 *    Ex3.c
 *
 * Created on Thu Aug 08 2024 1:42:21 PM
 *       Author: Mina Waguih
 *
 * Description: C program that reads two complex numbers and displays the sum of the complex numbers.
 */

#include <stdio.h>

struct complex
{
    float real;
    float imag;
};

struct complex get_complex()
{
    struct complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}

struct complex add_complex(struct complex c1, struct complex c2)
{
    struct complex sum;
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
    return sum;
}

int main()
{
    printf("Enter information for 1st complex number:\n");
    struct complex c1 = get_complex();

    printf("Enter information for 2nd complex number:\n");
    struct complex c2 = get_complex();

    struct complex sum = add_complex(c1, c2);
    printf("Sum of complex numbers = %.1f + %.1fi\n", sum.real, sum.imag);
    return 0;
}
