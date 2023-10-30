#include <bits\stdc++.h>
using namespace std;

class product {
    //fields (member variables)
    public:
    int pno;
    string pname;
    float price;

    //default constructor
    product() {
        cout<<"I am default constructor."<<endl;
    }

    //parameterised constructor
    product(int pno, string pname, float price) {
        //this is pointer in cpp use to specifies the calling object members
        this->pno = pno;
        this->pname = pname;
        this->price = price;
    }

    //method (member function)
    void display() {
        cout<<"product info :"<<endl;
        cout<<"pno = "<<pno<<endl;
        cout<<"pname = "<<pname<<endl;
        cout<<"price = "<<price<<endl;
        cout<<"----------------------------------"<<endl;
    }

    //destructor
    ~product() {
        cout<<"object is destroid."<<endl;
    }

    //operator overloading
    bool operator ==(product &a) {
        if(this->pno == a.pno && this->pname == a.pname && this->price == a.price) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    product p1(1, "mouse", 350.3f);
    p1.display();

    // deep copy
    product p2 = p1;
    p2.display();

    if(p1 == p2) {
        cout<<"Equal objects."<<endl;
    } else {
        cout<<"Unequal objects."<<endl;
    }

    p1.pname = "keyboard";
    p1.price = 700.5f;

    p1.display();
    p2.display();

    if(p1 == p2) {
        cout<<"Equal objects."<<endl;
    } else {
        cout<<"Unequal objects."<<endl;
    }

    //shallow copy
    product *p3 = &p1;
    p3->pname = "moniter";
    p3->price = 450.30f;

    p1.display();
    p3->display();

    if(p1 == *p3) {
        cout<<"Equal objects."<<endl;
    } else {
        cout<<"Unequal objects."<<endl;
    }

    return 0;
}