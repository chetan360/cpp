#include<iostream>
using namespace std;

class student {
    //default data members are private
    //we can not access private data members
    //make it public
    public:
    int rno;
    string sname;
    float marks;

    student() {
        //default constructor
    }

    //parameterise constructor
    student(int r, string n, float m) {
        rno = r;
        sname = n;
        marks = m;
    }

    //copy constructor
    student(student &s) {
        rno = s.rno;
        sname = s.sname;
        marks = s.marks;
    }

    //distructor runs after main function
    ~student() {
        cout<<"object is destroid"<<endl;
    }

    void printInfo() {
        cout<<"Roll no. : "<<rno<<endl;
        cout<<"Name : "<<sname<<endl;
        cout<<"Marks : "<<marks<<endl;       
    }

    bool operator == (student s) {
        if(rno==s.rno && sname==s.sname && marks==s.marks) {
            return true;
        }
        return false;
    }
};

class fun {
    string name1;

    public:
    void setname(string str) {
        name1 = str;
    }

    void getname() {
        cout<<"Name is "<<name1;
    }
};

int main() {
    student arr[3];
    for(int i=0; i<3; i++) {
        cout<<"Roll no. : ";
        cin>>arr[i].rno;
        cout<<"Name : ";
        cin>>arr[i].sname;
        cout<<"Marks : ";
        cin>>arr[i].marks;  
    }

    cout<<"The information of the students is :"<<endl;
    for(int i=0; i<3; i++) {
        arr[i].printInfo();
    }

    //we can access prvate data members using public functin
    string myname;
    fun me;
    cout<<endl<<"New name is :"<<endl;
    cin>>myname;
    me.setname(myname);
    me.getname();

    student s1(44, "Chetan", 95);
    cout<<endl<<"New one :"<<endl;
    s1.printInfo();

    student s2 = s1;
    s2.printInfo();

    if(s1==s2) {
        cout<<endl<<"Same"<<endl;
    } else {
        cout<<endl<<"Not Same"<<endl;
    }

    return 0;
}