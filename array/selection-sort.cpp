#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    int temp;
    for (int i = 0 ;i<n-1;i++){
        // Find the minimum element in remaining unsorted array
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                temp = arr[j];
                arr[j] = arr[minIndex];
                arr[minIndex]=temp;
            }
        }
    } 
}

int main(){
    int size;
    cout<<"Enter Size of Array: ";cin>>size;
    int arr[size];
    cout<<"\nEnter elements in the array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    selectionSort(arr, size);
    // print sorted array
    cout<<"\nSorted Array: ";
    for(int i=0; i<size; i++){
        cout<<" "<<arr[i];
    }
    return 0;
}