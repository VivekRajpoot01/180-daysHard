#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            //search right side of array
            start=mid+1;
        }
        else{
            //if element is greater than the middle element then search left side.
            end=mid -1 ;
        }
        mid = start +(end-start)/2;
    }
    return -1;
}
int main(){
    cout<<"Enter the size of an array: ";
    int size;
    cin>>size;
    int arr[size];
    cout<<"\nEnter elements in the array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"\nEnter the target element that you want to search: ";
    int target;
    cin>>target;

    int result = binarySearch(arr,size,target);
    if(result != -1){
        cout << "\nElement found at index "<<result;
    }
    else{
        cout << "Element not present";
    }

    return 0;
}