#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i=0;i<size;i++){
        if (arr[i] ==target){
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
    cout<<"\nEnter the elements in the array: ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    int target;
    cout << "\n Enter a number to search :";
    cin >>  target ;

    int result = linearSearch(arr, size, target);

    if(result!=-1){
        cout <<"Element found at index "<< result;
    }
    else{
        cout <<"Element not found";
    }
    return 0;
}