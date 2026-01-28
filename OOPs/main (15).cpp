#include<iostream>
using namespace std;


class student{
    public:
    int x = 10;
    int y = 11;
    string name;
    student(string name){
        setName(name);
    }
    
    void print();
    
    void setName(string name){
        this->name = name;
        
    }

    



};

void student::print(){
//     // cout << x << endl;
//     // cout << y << endl;
cout << "name: " << name << endl;
}


int main(){
    student *s1 = new student("vinil");

    student s2("brook"); // stack allocation.

    student *s4 = new student(*s1);

    
    
    s2.print();
    s4->print();
    
    return 0;
}