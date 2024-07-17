/*
 *    EX8.c
 *
 * Created on Wed Jul 17 2024 6:54:48 PM
 *       Author: Mina Waguih
 *
 * Description: Perform basic arithmetic operations.
 */

#include <stdio.h>

int main()
{
    char operator;
    float num1, num2;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    switch (operator)
    {
    case '+':
        printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
        break;
    case '/':
        if (num2 == 0)
        {
            printf("ERROR !!! Division by zero.\n");
        }
        else
        {
            printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
        }
        break;
    default:
        printf("ERROR !!! Invalid operator.\n");
        break;
    }
}