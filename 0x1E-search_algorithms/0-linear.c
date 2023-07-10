#include <stdio.h>

int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;  // Return -1 if the array is NULL
    }

    for (size_t i = 0; i < size; i++) {
        printf("Comparing %d\n", array[i]);  // Print the value being compared

        if (array[i] == value) {
            return i;  // Return the index if the value is found
        }
    }

    return -1;  // Return -1 if the value is not found
}

int main() {
    int arr[] = {5, 2, 8, 10, 1};
    size_t size = sizeof(arr) / sizeof(arr[0]);
    int value = 8;

    int result = linear_search(arr, size, value);

    if (result == -1) {
        printf("Value not found\n");
    } else {
        printf("Value found at index %d\n", result);
    }

    return 0;
}
