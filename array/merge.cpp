#include <iostream>
using namespace std;
int main(){
    int arr1[20], size1;
    cout<<"Enter the size of array 1: ";
    cin>>size1;
    cout<<"Enter the elements in array1: ";
    for(int i=0; i<size1; i++){
        cin>>arr1[i];
    }

    int arr2[20], size2;
    cout<<"Enter the size of array 2";
    cin>>size2;
    cout<<"Enter the elements in array2";
    for(int i=0; i<size2; i++){
        cin>>arr2[i];
    }
    // copy elements of arr1 to arr3
    int arr3[50], j;
    for(int i=0;i<size1;i++){
        arr3[j] = arr1[i];
        j++;
    }
    // copy elements of arr2 to arr3
    for(int i=0;i<size2;i++){
        arr3[j] = arr2[i];
        j++;
    }
    // print elements of arr3
    for(j=0;j<size1+size2;j++){
        cout<<arr3[j];
    }

    

    
    return 0;
}