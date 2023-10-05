#include <iostream>
#include <string>

int main() {
    std::string inp;
    std::cin >> inp;

    if (inp == "Integer") {
        std::cout << sizeof(int);
    } else if (inp == "Long") {
        std::cout << sizeof(long);
    } else if (inp == "Float") {
        std::cout << sizeof(float);
    } else if (inp == "Double") {
        std::cout << sizeof(double);
    } else if (inp == "Character") {
        std::cout << sizeof(char);
    } else {
        std::cout << "Unknown data type" << std::endl;
    }

    return 0;
}