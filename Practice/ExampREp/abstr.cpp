#include<iostream>
using namespace std;



class Abstract{

    public:
    virtual void display() = 0;

    virtual void see1(){
        cout << "Inside see1";
    };
};

class Deriv : public Abstract{
    public:

    void display(){
        cout << "I am inside Derived class ";
    }

    void see1(){
        cout << "See1";
    }

};



int main(){

    
    // Abstract* a = new Deriv();
    // a->display();
    // Abstract* a = new Deriv();
    // a->see1();
    // Deriv d;
    // d.display();

    // Abstract a;
    // a.see1();
    



}