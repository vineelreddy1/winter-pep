#include<iostream>
using namespace std;

class Interface{
    public:

    virtual void print1() = 0;
    virtual void print2() = 0;
    virtual void print3() = 0;
};


class Derive : public Interface{
    public:
    void print1(){

        cout << "print1";

    }
    void print2(){

        cout << "print2";

    }
    void print3(){

        cout << "print3";

    }
};


int main(){

    Interface* in = new Derive();
    in->print1();
    in->print2();
    in->print3();
}