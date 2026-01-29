#include<iostream>
using namespace std;


class Animal{

    public:

    void walk(){
        cout << "Animal walks\n";

    }
};


class Dog : public Animal{

    public:

    void barks(){
        cout << "Dog barks\n";
    }
};


class Cat : public Animal{
    public:

    void say(){
        cout << "cat says meow-meow\n";
    }


};


int main(){

    Animal a;
    a.walk();

    Dog d;
    d.barks();
    d.walk();

    Cat c;
    c.say();
    c.walk();

}