#include <iostream>
using namespace std;

void duplicateArr(int arr[], int temp[], int n) {
    int j = 0;
    
    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;
        
        // Check if arr[i] is a duplicate in the temp array
        for (int k = 0; k < j; k++) {
            if (arr[i] == temp[k]) {
                isDuplicate = true;
                break;
            }
        }
        
        // If arr[i] is not a duplicate, add it to the temp array
        if (!isDuplicate) {
            temp[j] = arr[i];
            j++;
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int temp[n];
    duplicateArr(arr, temp, n);
    
    cout << "\nElement without duplicacy: ";
    for (int i = 0; i < n; i++) {
        cout << temp[i] << "\t";
    }
    
    return 0;
}
