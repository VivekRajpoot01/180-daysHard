#include <iostream>
#include <algorithm> // Include the algorithm library for std::sort

// Binary search function
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Return the index where the target is found
        } else if (arr[mid] < target) {
            left = mid + 1; // Adjust the left bound if target is in the right half
        } else {
            right = mid - 1; // Adjust the right bound if target is in the left half
        }
    }

    return -1; // Return -1 if the target is not found in the array
}

int main() {
    int arr[] = {25, 17, 42, 8, 13, 10, 5};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    std::sort(arr, arr + size); // Sort the array using std::sort

    int target = 13;
    int result = binarySearch(arr, size, target);

    if (result != -1) {
        std::cout << "Target " << target << " found at index " << result << std::endl;
    } else {
        std::cout << "Target " << target << " not found in the array." << std::endl;
    }

    return 0;
}
