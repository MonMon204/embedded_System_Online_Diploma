/*
 *    EX2.c
 *
 * Created on Thu Jul 25 2024 3:06:18 PM
 *       Author: Mina Waguih
 *
 * Description: Calculate the average of n numbers.
 */

#include <stdio.h>

int main()
{
    float a[100] = {0};
    float sum=0;
    int n;
    printf("Enter the number of data: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter number: ");
        scanf("%f", &a[i]);
        sum += a[i];
    }
    printf("Average = %.2f\n", sum / n);
    return 0;
}