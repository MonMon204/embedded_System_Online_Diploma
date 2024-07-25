/*
 *    EX3.c
 *
 * Created on Thu Jul 25 2024 3:14:18 PM
 *       Author: Mina Waguih
 *
 * Description: Transpose a matrix.
 */

#include <stdio.h>

int main()
{
    float a[100][100] = {0}, transposed[100][100] = {0};
    int r, c;
    printf("Enter the number of rows and colums of the matrix: ");
    scanf("%d %d", &r, &c);
    printf("Enter the elements of the matrix\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter a%d%d: ", i + 1, j + 1);
            scanf("%f", &a[i][j]);
        }
    }
    printf("Entered matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%.2f\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Transposed matrix:\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            transposed[i][j] = a[j][i];
            printf("%.2f\t", transposed[i][j]);
        }
        printf("\n");
    }
    return 0;

}