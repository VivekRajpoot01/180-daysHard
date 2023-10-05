#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"\nEnter element in the array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target element: ";
    cin>>target;

    int result = linearSearch(arr,size,target);

    if(result != -1){
        cout<<"\nElement found at index "<<result;
    }else{
        cout<<"\nTarget not found";
    }
    return 0;
}