#include <iostream>
using namespace std;
// creatinng a function to print an array
void printArray(int arr[],int size){
	cout <<"printing the array"<< endl;
	// printing the aray
	int i;
	for(i=0;i<size;i++){
		cout<< arr[i]<<" ";
	}
	cout <<endl<<"Printing Done"<<endl;
}

int main(){
	// declare
	int number[15];
	cout <<"Value at 1 index: " << number[1] << endl;
	// initialising an array
	int second[] = {2,8,6};
	// accessing an element
	cout <<"Value at 2 index: "<< second[2] << endl;
	cout <<"Everything is fine"<<endl;
	
	int third[15] = {5,8};
	int n=15;
	cout <<"Printing the array"<<endl;
	// calling the function
	printArray(third,15);
	
}
