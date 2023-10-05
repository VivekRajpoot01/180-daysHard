#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Function to find k closest elements to target in a sorted array
void findClosestElements(int arr[], int n, int x, int k) {
    // Create a vector to store the k closest elements
    vector<int> closestElements;

    // Initialize left and right pointers
    int left = 0;
    int right = n - 1;

    // Binary search to find the index of the element closest to x
    while (right - left >= k) {
        if (abs(arr[left] - x) <= abs(arr[right] - x)) {
            right--;
        } else {
            left++;
        }
    }

    // Populate the vector with the k closest elements
    for (int i = left; i <= right; i++) {
        closestElements.push_back(arr[i]);
    }

    // Sort the vector
    sort(closestElements.begin(), closestElements.end());

    // Print the k closest elements
    for (int i = 0; i < k; i++) {
        cout << closestElements[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x, k;
    cin >> x >> k;

    // Find and print k closest elements
    findClosestElements(arr, n, x, k);
    
    return 0;
}
