#include <iostream>

// Linear search function
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i; // Return the index where the target is found
        }
    }
    return -1; // Return -1 if the target is not found in the array
}

int main() {
    int arr[] = {10, 25, 8, 5, 13, 42, 17};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    int target = 13;
    int result = linearSearch(arr, size, target);

    if (result != -1) {
        std::cout << "Target " << target << " found at index " << result << std::endl;
    } else {
        std::cout << "Target " << target << " not found in the array." << std::endl;
    }

    return 0;
}
