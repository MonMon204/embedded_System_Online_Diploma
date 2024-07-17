/*
 *    EX3.c
 *
 * Created on Wed Jul 17 2024 6:29:25 PM
 *       Author: Mina Waguih
 *
 * Description: Find the largest number among three numbers.
 */

#include <stdio.h>

int main()
{
    float x, y, z;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &x, &y, &z);
    if (x >= y)
    {
        if (x >= z)
        {
            printf("The largest number is %f\n", x);
        }
        else
        {
            printf("The largest number is %f\n", z);
        }
    }
    else
    {
        if (y >= z)
        {
            printf("The largest number is %f\n", y);
        }
        else
        {
            printf("The largest number is %f\n", z);
        }
    }
    
}