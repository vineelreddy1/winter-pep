#include<iostream>
using namespace std;


class Ani{

    public:

    virtual void sound(){
        cout << "Animal makes sound";
    }

};

class Dog : public Ani{
    public:

    void sound(){
        cout << "Dog barks";
    }



};


int main(){
    Ani* a = new Dog();
    a->sound();
}