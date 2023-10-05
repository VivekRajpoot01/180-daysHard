#include <iostream>
using namespace std;

void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int Insertion(int arr[], int size, int element, int capacity, int index) {
    if (size >= capacity) {
        return -1;
    }
    for (int i = size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main() {
    int arr[100];
    int size;
    
    cout << "Enter the size of the array: ";
    cin >> size;
    
    // Taking input from the user and storing in an array.
    cout<<"\nEnter element in the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    int element;
    cout << "\nEnter element that you want to insert: ";
    cin >> element;
    
    int index;
    cout << "\nEnter the index that you want to insert the element: ";
    cin >> index;
    
    Insertion(arr, size, element, 100, index);
    size += 1;
    cout<<"\nUpdated Array: ";
    display(arr, size);
    
    return 0;
}
