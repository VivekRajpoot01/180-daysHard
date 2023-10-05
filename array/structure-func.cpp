#include <iostream>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};
void initialize(struct Rectangle*r,int l, int b){
    r->length = l;
    r->breadth=b;
}
int area(struct Rectangle r){
    return (r.length*r.breadth);
}
int perimeter(struct Rectangle r){
    return 2*(r.length+r.breadth);
}
int main(){
    struct Rectangle r{0,0};
    cout<<"Enter the length and breadth: ";
    int l, b;
    cin>>l>>b;
    initialize(&r ,l,b );
    cout<<"Area of the rectangle: ";
    cout<<area(r)<<endl;
    cout<<"Perimeter of the rectangle: ";
    cout<<perimeter(r);
    return 0;
}