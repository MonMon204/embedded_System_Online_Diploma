/*
 *    EX5.c
 *
 * Created on Thu Jul 25 2024 3:53:59 PM
 *       Author: Mina Waguih
 *
 * Description: C program to search for an element in an array.
 */

#include <stdio.h>

int main()
{
    int a[100]  = {0}, element;
    int index = -1;
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &element);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == element)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        printf("Element not found in the array.");
    }
    else
    {
        printf("Element found at index %d.", index+1);
    }
}