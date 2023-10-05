#include <iostream>
using namespace std;
class Fruit{
    public:
    string name;
    string color;
};
int main(){
    Fruit mango; //object 
    mango.name = "Mango";
    mango.color = "Yellow";
    cout<<mango.name<<"-"<<mango.color;
    return 0;
}