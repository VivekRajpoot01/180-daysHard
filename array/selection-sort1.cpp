#include <iostream>
using namespace std;
void selectionSort(int arr[], int n){
    int temp;
    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
            if(minIndex!=i){
                temp = arr[i];
                arr[i] = arr[minIndex];
                arr[minIndex] = temp;
            }
        }
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the element in the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    selectionSort(arr,n);
    // display sorted array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}