#include <iostream>

using namespace std;

void sum(int, int);

int sum(int, int, int);
int main(){
//	int num1, num2;
//	cin >> num1 >> num2 ;
//	sum (num1, num2);
	
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	
	int c = sum (num1, num2, num3);
	cout << c;
}

void sum(int a, int b){
	int s;
	s = a+ b;
	cout << "Sum of numbers : " << s << endl;
}

int sum(int a, int b, int c){
	int s;
	s = a+ b +c;
	return s;
}
