#include<iostream>
using namespace std;

class cm {
public:
    int rno;
    string name;

    void print() {
        cout<<" "<<rno<< " "<<name<<endl;
    }
    ~cm(){}

    void setinfo(int a,string s) {
        rno = a;
        name = s;
    }
};

class kd: public cm {
};

int main() {
    cm a;
    kd b;

    a.setinfo(44, "chetan");
    b.setinfo(51, "ketaki");
    a.print();
    b.print();
    return 0;
}