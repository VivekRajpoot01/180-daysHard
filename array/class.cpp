#include <iostream>
using namespace std;

class Stu {
    char name[20];
    int age;
    int reg;

public:
    void readdata();
    
    void showdata();
};

void Stu:: readdata(){
    cout << "Enter your name: ";
        cin >> name;
        cout << "Enter the age: ";
        cin >> age;
        cout << "Enter the Registration number: ";
        cin >> reg;
}

void Stu:: showdata(){
    cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Registration no.: " << reg << endl;
}

int main() {
    Stu s; 
    
    s.readdata();  
    s.showdata();  
    return 0;
}
