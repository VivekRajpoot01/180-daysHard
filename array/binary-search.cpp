#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int target){
    int beg = 0;
    int end = size -1;
    while(beg<=end){
        int mid = (beg + end) / 2;
            if(arr[mid] == target){
                return mid ;
            }
            else if(arr[mid]<target){
                beg = mid + 1;
            }
            else{
                end = mid - 1;
            }
        mid = (beg+end)/2;
    }
    return -1;
}
int main(){
    int size;
    cout<<"Enter the size of the array";
    cin>>size;
    cout<<"\nEnter the element in the array";
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int target;
    cout<<endl<<"Enter a number to search: ";
    cin>>target;

    int result = binarySearch(arr,size,target);

    if(result!=-1){
        cout<<"Target element found at index: "<<result<<"\n";
    }
    else{
        cout<<"Target not found";
    }
    return 0;
}