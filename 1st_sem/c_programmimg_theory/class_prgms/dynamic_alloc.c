#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, sum = 0;
    int *arr;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory using malloc()
    arr = (int *)malloc(n * sizeof(int));

    // Check whether memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input array elements
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of array elements
    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    // Display the sum
    printf("Sum = %d\n", sum);

    // Deallocate dynamically allocated memory
    free(arr);

    // Set the pointer to NULL after freeing memory
    arr = NULL;

    return 0;
}