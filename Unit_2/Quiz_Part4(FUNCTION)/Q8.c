/*
 *    Q8.c
 *
 * Created on Mon Jul 29 2024 2:11:53 PM
 *       Author: Mina Waguih
 *
 * Description: C function to return the index of LAST occurrence of a number in a given array (index starting from 0, le. C array style), if the item is not in the list return -1
 */

#include <stdio.h>

int lastOccurrence(int arr[], int size, int num)
{
    if (size == 0)
        return -1;
    if (arr[size - 1] == num)
        return size - 1;
    else
        return lastOccurrence(arr, size - 1, num);
}

int main()
{
    int arr[100], num;
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter a number to search for: ");
    scanf("%d", &num);
    printf("The last occurrence of %d is at index: %d", num, lastOccurrence(arr, size, num));
    return 0;
}
