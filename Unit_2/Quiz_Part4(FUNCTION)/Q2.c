/*
 *    Q2.c
 *
 * Created on Mon Jul 29 2024 2:27:27 PM
 *       Author: Mina Waguih
 *
 * Description: C program for swapping two arrays A & B with different lengths
 */

#include <stdio.h>

void swapArrays(int arr1[], int arr2[], int * size1, int * size2) {
    int temp;
    int maxSize = (*size1 > *size2) ? *size1 : *size2;

    for (int i = 0; i < maxSize; i++) {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }

    temp = *size1;
    *size1 = *size2;
    *size2 = temp;
}

int main() {
    int arr1[100];
    int arr2[100];
    int size1, size2;

    printf("Enter size of array A: ");
    scanf("%d", &size1);
    printf("Enter elements of array A: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of array B: ");
    scanf("%d", &size2);
    printf("Enter elements of array B: ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }


    printf("Before swapping:\n");
    printf("Array A: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nArray B: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", arr2[i]);
    }

    swapArrays(arr1, arr2, &size1, &size2);

    printf("\n\nAfter swapping:\n");
    printf("Array A: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nArray B: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}