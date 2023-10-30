#include <bits\stdc++.h>
using namespace std;

class Areas {
    public:

    //function overloding
    
    void area(float r) {
        cout<<"Area of circle = "<<3.14*r*r<<endl;
    }

    
    void area(int s) {
        cout<<"Area of square = "<<s*s<<endl;
    }

    void area(int l, int b) {
        cout<<"Area of rectriangle = "<<l*b<<endl;
    }
};


class parent {
    public:
    string parentName;

    void setName(string parentName) {
        this->parentName = parentName;
    }

    //function overiding (virtual function)
    //dynamic binding
    virtual void display() {
        cout<<parentName<<endl;
    }
};

class child: public parent {
    public:
    string childName;

    child(string childName, string parentName) {
        parent::setName(parentName);
        this->childName = childName;
    }

    void display() {
        cout<<parentName<<endl;
        cout<<childName<<endl;
    }
};

int main() {
    parent* p;
    child c("chetan", "satish");
    p = &c;

    p->display();

    Areas a;
    a.area(3.14f);
    a.area(4);
    a.area(3, 6);

    return 0;
}