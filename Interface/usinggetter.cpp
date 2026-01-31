#include<iostream>
using namespace std;

class A{
    int a = 5;
    public:

    int getx(){
        return a;

    }
};



int main(){
    A a1;
    int b = a1.getx();
    cout << b;
    
}
