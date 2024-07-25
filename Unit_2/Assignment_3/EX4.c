/*
 *    EX4.c
 *
 * Created on Thu Jul 25 2024 3:35:57 PM
 *       Author: Mina Waguih
 *
 * Description: C program to insert an element in an array at a specific location.
 */

#include <stdio.h>

int main()
{
    float a[100] = {0}, element;
    int index;
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements to be inserted: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
    }
    printf("Enter the element to be inserted: ");
    scanf("%f", &element);
    printf("Enter the location: ");
    scanf("%d", &index);
    index--;
    for (int i = n; i >= index; i--)
    {
        a[i] = a[i - 1];
    }
    a[index] = element;
    n++;
    printf("The array after insertion is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%.2f ", a[i]);
    }
    return 0;
}