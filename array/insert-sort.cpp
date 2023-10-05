#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    int temp;
    for(int i=1; i<n; i++){
        temp = arr[i];
        int j = i-1;
        while((j>=0) && (arr[j]>temp)){
            arr[j+1] = arr[j];
        	j--;
        }
        arr[j+1] = temp;
    }
}

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    // taking input
    int arr[size];
    cout<<"\nEnter the element in the array: ";
    for(int i=0; i<size; i++){
    cin>>arr[i];
    }
    // calling insertionSort function
    insertionSort(arr, size);
    //display the sorted array
    cout<<"\nSorted array: ";
    for(int i=0; i<size; i++){
        cout<<" "<<arr[i];
    }
    return 0;
}
