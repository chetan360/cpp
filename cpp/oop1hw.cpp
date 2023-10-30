#include<iostream>
using namespace std;

//class declaration
class Hello{
    string name;
};

class person{
    public:
    string name;
    int age;
    //0 = male
    //1 = female
    bool gender;

    //constructors
    person() {
        cout<<"Default constructor"<<endl;
    }

    person(string str, int ag, bool gen) {
        cout<<"Parameterised constructor"<<endl;
        name = str;
        age = ag;
        gender = gen;
    }

    person(person &a) {
        cout<<"Copy constructor"<<endl;
        name = a.name;
        gender = a.gender;
        age = a.age;
    }

    ~person() {
        cout<<"Destructor"<<endl;
    }

    //getters
    string getName() {
        return name;
    }

    //setters
    void setName(string s) {
        name = s;
    }

    //operator overloading
    bool operator == (person &a) {
        if(name == a.name && age == a.age && gender == a.gender) {
            return true;
        }
        return false;
    }

    void printInfo() {
        cout<<" "<<name<<" "<<age<<" "<<gender<<endl;
    }
};

class calculate{
    public:
    //area of circle
    float area(int r) {
        return 3.14 * r * r;
    }

    //area of triangle
    int area(int l, int r) {
        return l * r;
    }
};

int main() {
    person a("chaetan", 19, 0);
    a.printInfo();

    person b = a;
    cout<<"After copping : "<<endl;
    b.printInfo();
    

    person c("sumit", 18, 0);
    c.printInfo();

    cout<<"change name : "<<endl;
    b.setName("swapnil");

    cout<<b.getName()<<endl;

    cout<<"compaire a & b : ";
    if(a == b) {
        cout<<"Same"<<endl;
    } else {
        cout<<"Not same"<<endl;
    }

    calculate n;
    cout<<"Area of circle is "<<n.area(5)<<endl;
    cout<<"Area of Triangle is "<<n.area(3,2)<<endl;

    return 0;
}