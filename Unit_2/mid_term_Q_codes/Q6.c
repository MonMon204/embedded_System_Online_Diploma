#include <stdio.h>

int findUniqueNumber(int arr[], int size) {
    int uniqueNumber = arr[0];
    
    for (int i = 1; i < size; i++) {
        uniqueNumber ^= arr[i];
    }
    
    return uniqueNumber;
}

int main() {
    int arr[100];
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int uniqueNumber = findUniqueNumber(arr, size);
    
    printf("The unique number in the array is: %d\n", uniqueNumber);
    
    return 0;
}