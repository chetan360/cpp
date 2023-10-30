#include<iostream>
using namespace std;

class A {
    public:
    void area(float r) {
        cout<<"Area of circle is "<<3.14*r*r<<endl;
    }

    void area(float  b, float h) {
        cout<<"Area of triangle is "<<(1/2)*b*h<<endl;
    }
};

int main() {
    A a;
    a.area(6);
    a.area(2.7,3.0);
    return 0;
}