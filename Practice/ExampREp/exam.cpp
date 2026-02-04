#include<iostream>
using namespace std;

class A{

    public:
    void print(){
        cout << "INside class A:" << endl;
    }

};
class B: public A{

    public:
    void print(){
        cout << "INside class B: " << endl;

    }

};

// Runtime POlymorphism
int main(){

    A* a1 = new B;
    a1->print();

}