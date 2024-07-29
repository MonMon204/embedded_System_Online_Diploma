/*
 *    Q3.c
 *
 * Created on Mon Jul 29 2024 2:16:08 PM
 *       Author: Mina Waguih
 *
 * Description: C function that reverse an input array
 */

#include <stdio.h>

void reverseArray(int arr[], int size)
{
    if (size == 0)
        return;
    printf("%d ", arr[size - 1]);
    reverseArray(arr, size - 1);
}

int main()
{
    int arr[100];
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    reverseArray(arr, size);
    return 0;
}
