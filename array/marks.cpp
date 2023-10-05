#include <iostream>

using namespace std;

float get(float *arr);

int main(){
	float arr[5];
	
	float result = get(arr);
	cout << result;
}

float get(float *arr){
	float sum = 0;
	for(int i=0; i<5; i++){
		cout << "Subject " << i+1<< " marks - ";
		cin >> arr[i];
		sum +=arr[i];
	}
	return sum;
}
