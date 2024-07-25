/*
 *    EX1.c
 *
 * Created on Thu Jul 25 2024 2:55:05 PM
 *       Author: Mina Waguih
 *
 * Description: Add two matrices.
 */

#include <stdio.h>

int main()
{
    float a[2][2], b[2][2], sum[2][2];
    printf("Enter the elements of 1st matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter a%d%d: ", i + 1, j + 1);
            scanf("%f", &a[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter a%d%d: ", i + 1, j + 1);
            scanf("%f", &b[i][j]);
        }
    }
    printf("Sum of the matrices:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%.1f\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}